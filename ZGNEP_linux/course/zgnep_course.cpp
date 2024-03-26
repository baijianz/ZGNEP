#include "zgnep_course.h"
#include "ui_zgnep_course.h"
#include <QModelIndex>
#include <QObject>
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>
#include "zgnep_course_time.h"
#include <QFileSystemModel>
#include "zgnep_course_item.h"
#include <QMessageBox>
#include "zgnepstandarditem.h"
#include "eventfilter.h"
#include "./admin/zgnep_admin_course.h"
extern zgnep_course_time *courseTimeMode;
extern QVector<zgnep_course_item *> CourseVec;
QTableView *zgnep_courseTableViewModel;
QMap<QString, int> COURSEMAP = {
    {"Mathematics", 1},         // 数学 (等于1)
    {"Physics", 2},             // 物理 (等于2)
    {"Chemistry", 3},           // 化学 (等于3)
    {"Biology", 4},             // 生物 (等于4)
    {"English", 5},             // 英语 (等于5)
    {"History", 6},             // 历史 (等于6)
    {"Geography", 7},           // 地理 (等于7)
    {"Computer Science", 8},     // 计算机科学 (等于8)
    {"Economics", 9},           // 经济学 (等于9)
    {"Political Science", 10},   // 政治学 (等于10)
    {"Sociology", 11},          // 社会学 (等于11)
    {"Psychology", 12},         // 心理学 (等于12)
    {"Physical Education", 13},  // 体育 (等于13)
    {"Art", 14},                // 艺术 (等于14)
    {"Music", 15},              // 音乐 (等于15)
    {"Foreign Languages", 16},   // 外语 (等于16)
    {"Literature", 17},         // 文学 (等于17)
    {"Environmental Science", 18} // 环境科学 (等于18)
};
QMap<int, QBrush> colorMap;// 添加颜色到字典中
QVector<QVector<int>> matrix(12, QVector<int>(7, -1)); //-1为没课


zgnep_course::zgnep_course(QWidget *parent, int flag, QString CourseID) :
    QDialog(parent),
    ui(new Ui::zgnep_course)
{
    this->flag = flag;
    this->courseID = CourseID;
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    ui->setupUi(this);
//    zgnep_course_item::zgnep_course_init();  //为了方便调试，才放在这里。等后面调试完成之后，放在系统初始化那里。
//    zgnep_course_time::CourseTimeInit();
    zgnep_courseTableViewModel = ui->tableView;
    int index = 0;
    for( auto x : courseTimeMode->course)
    {
       list.append(x);
       index++;
       if(index == 4 || index == 8) {list.append("休息");}
    }
    theModel = new  QStandardItemModel(12, 7, this);
    theModel->setHorizontalHeaderLabels(WeekDayList);
    theModel->setVerticalHeaderLabels(list);
    QHeaderView *verticalHeader = ui->tableView->verticalHeader();
    verticalHeader->setStyleSheet("background:#16A085;color:#FFFFFF;border-radius:5px;");
    QHeaderView *hHeader = ui->tableView->horizontalHeader();
    hHeader->setStyleSheet("background:#16A085;color:#FFFFFF;border-radius:5px;");
    theSelection = new QItemSelectionModel(theModel);
    connect(theSelection, &QItemSelectionModel::currentChanged, this, &zgnep_course::on_currentChanged);
    ui->tableView->setModel(theModel);
    ui->tableView->setSelectionModel(theSelection);
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView->viewport()->installEventFilter(new EventFilter());
    Modelinit();
    this->setWindowTitle("课程表");

}

bool zgnep_course::checkTimeCourse(int weekday, int courseINdex)
{
    return  matrix[courseINdex][weekday] > -1;
}

void zgnep_course::zgnep_courseInit()
{
    for(auto x : CourseVec)
    {
        auto mp = x->courseMap;
        for(auto iter = mp.begin(); iter != mp.end(); iter++)
        {
            QVector<int> nodes = iter.value();
            for(auto val : nodes)
            {
                 matrix[val - 1][iter.key() - 1] = COURSEMAP[x->courseName];
            }
        }
    }
    colorMap[1] = QBrush(QColor(255, 255, 204)); // 淡黄色
    colorMap[2] = QBrush(QColor(204, 255, 255)); // 淡青色
    colorMap[3] = QBrush(QColor(255, 204, 255)); // 淡紫色
    colorMap[4] = QBrush(QColor(204, 255, 204)); // 淡绿色
    colorMap[5] = QBrush(QColor(255, 204, 204)); // 淡红色
    colorMap[6] = QBrush(QColor(204, 204, 255)); // 淡蓝色
    colorMap[7] = QBrush(QColor(255, 230, 204)); // 淡橙色
    colorMap[8] = QBrush(QColor(204, 255, 230)); // 淡绿色
    colorMap[9] = QBrush(QColor(230, 204, 255)); // 淡紫色
    colorMap[10] = QBrush(QColor(204, 230, 255)); // 淡蓝色
    colorMap[11] = QBrush(QColor(230, 255, 204)); // 淡绿色
    colorMap[12] = QBrush(QColor(255, 204, 230)); // 淡红色
    colorMap[13] = QBrush(QColor(255, 204, 230)); // 淡红色
    colorMap[14] = QBrush(QColor(255, 230, 204)); // 淡橙色
    colorMap[15] = QBrush(QColor(204, 255, 255)); // 淡青色
    colorMap[16] = QBrush(QColor(255, 204, 255)); // 淡紫色
    colorMap[18] = QBrush(QColor(204, 255, 204)); // 淡绿色
    colorMap[18] = QBrush(QColor(255, 255, 204)); // 淡黄色
    colorMap[19] = QBrush(QColor(50, 50, 50));  //深灰色
}

void zgnep_course::WriteCourseInfo()
{
    QString path = "./course/zgnep_course.zgn";
    QFile file(path);
    file.open(QIODevice::ReadWrite | QIODevice::Truncate);
    QTextStream out(&file);
    //CourseVec 里面装的就是数据
    for(int i = 0; i < CourseVec.size(); i++)
    {
        QString CourseInfo;
        QString name = CourseVec[i]->courseName;
        QString courseID = CourseVec[i]->courseID;
        QString teacherID = CourseVec[i]->teachID;
        QString time;
        auto times = CourseVec[i]->courseMap; //数据格式[星期: {第几节，第几节}]
        for(auto iter = times.begin(); iter != times.end(); iter++)
        {
            QString timeItem;
            int key = iter.key();
            QVector<int> vals = iter.value();
            timeItem.push_back('(');
            timeItem.push_back(QString::number(key));
            timeItem.push_back(':');
            for(auto x : vals)
            {
                timeItem.push_back(QString::number(x));
                timeItem.push_back('/');
            }
            if(vals.size() >= 1)timeItem = timeItem.left(timeItem.size() - 1); //去掉最后一个/
            timeItem.push_back(')');
            time.push_back(timeItem);
        }

        CourseInfo.push_back('[');
        CourseInfo.push_back(courseID);
        CourseInfo.push_back('|');
        CourseInfo.push_back(name);
        CourseInfo.push_back('|');
        CourseInfo.push_back(teacherID);
        CourseInfo.push_back('|');
        CourseInfo.push_back(time);
        CourseInfo.push_back(']');

        out << CourseInfo << "\n";
    }
    file.close();
}

void zgnep_course::DeleteCourse(QString CourseID)
{
    for(int i = 0; i < CourseVec.size(); i++)
    {
        if(CourseVec[i]->courseID == CourseID)
        {
            CourseVec.erase(CourseVec.begin() + i);
            return;
        }
    }
    zgnep_courseInit();
}

zgnep_course::~zgnep_course()
{
    delete ui;
}

void zgnep_course::Modelinit()
{
    for(auto x : CourseVec)
    {
        auto mp = x->courseMap;
        for(auto iter = mp.begin(); iter != mp.end(); iter++)
        {
            QVector<int> nodes = iter.value();
            for(auto val : nodes)
            {
                //matrix[val - 1][iter.key() - 1] = COURSEMAP[x->courseName];
                auto item = new zgnepStandardItem(x->courseName, x->courseID, list[val - 1], WeekDayList[iter.key() - 1]);
                item->setTextAlignment(Qt::AlignCenter);
                if(flag == 1 && this->courseID.size() > 0 && x->courseID != courseID)
                {
                    item->setBackground(colorMap[19]); //深灰色
                }
                else
                {
                    item->setBackground(colorMap[COURSEMAP[x->courseName]]);
                }
                theModel->setItem(val - 1 + (val > 4) + (val > 8), iter.key() - 1, item);
            }
        }
    } //将矩阵填满


    for(int i = 0; i < theModel->rowCount(); i++)
    {
        for(int j = 0; j < theModel->columnCount(); j++)
        {
            zgnepStandardItem* item = dynamic_cast<zgnepStandardItem*>(theModel->item(i, j));
             if (!item)
             {
                 item = new zgnepStandardItem("", "", "", "");
                 theModel->setItem(i, j, item);
             }
             else
             {

             }
             item->setFlags(item->flags() & ~Qt::ItemIsEditable); // 将项设置为只读

        }
    }






}

void zgnep_course::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{

}

void zgnep_course::on_pushButton_clicked()
{
    this->close();
}
