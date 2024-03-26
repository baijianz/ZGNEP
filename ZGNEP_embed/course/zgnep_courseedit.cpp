#include "zgnep_courseedit.h"
#include "ui_zgnep_courseedit.h"
#include <QtWidgets>
#include "zgnep_course.h"
#include "zgnep_course_item.h"
#include "zgnep_course_time.h"
#include "zgnepstandedititem.h"
#include "eventfilter.h"
#include "labeldelegate.h"
#include "eventfileedit.h"

extern zgnep_course_time *courseTimeMode;
extern QVector<zgnep_course_item *> CourseVec;
extern QMap<QString, int> COURSEMAP;
extern QMap<int, QBrush> colorMap;// 添加颜色到字典中
extern QVector<QVector<int>> matrix; //-1为没课
zgnep_courseEdit *zgnepCourseEditModel;
QTableView *ZGENPCourseEditTableModel;
zgnep_courseEdit::zgnep_courseEdit(QWidget *parent, QString courseID) :
    QDialog(parent),
    ui(new Ui::zgnep_courseEdit), CourseID(courseID)
{
    this->setWindowState(this->windowState() | Qt::WindowFullScreen); // 将窗口设置为全屏模式
    ui->setupUi(this);
    zgnepCourseEditModel = this;
    ZGENPCourseEditTableModel = ui->tableView;
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
    //connect(theSelection, &QItemSelectionModel::currentChanged, this, &zgnep_course::on_currentChanged);
    ui->tableView->setModel(theModel);
    ui->tableView->setSelectionModel(theSelection);
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    init();

    //ui->tableView->setItemDelegate(new labelDelegate());
    ui->tableView->viewport()->installEventFilter(new eventFileEdit()); //绑定事件过滤器

}

zgnep_courseEdit::~zgnep_courseEdit()
{
    delete ui;
}

void zgnep_courseEdit::init()
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
                zgnepStandEditItem *item;
                if(x->courseID == this->CourseID)
                {
                    item = new zgnepStandEditItem(x->courseName, 1, CourseID); //1表示已经选上了
                    item->setBackground(colorMap[COURSEMAP[x->courseName]]);
                }
                else
                {
                    item = new zgnepStandEditItem(x->courseName, -1, ""); //-1表示不能选
                    item->setBackground(colorMap[19]); //深灰色
                }
                item->setTextAlignment(Qt::AlignCenter);
                item->setFlags(item->flags() & ~Qt::ItemIsEditable); // 将项设置为只读
                theModel->setItem(val - 1 + (val > 4) + (val > 8), iter.key() - 1, item);
            }
        }
    } //将矩阵填满


    for(int i = 0; i < theModel->rowCount(); i++)
    {
        for(int j = 0; j < theModel->columnCount(); j++)
        {
            zgnepStandEditItem* item = dynamic_cast<zgnepStandEditItem*>(theModel->item(i, j));
             if (!item)
             {

                 item = new zgnepStandEditItem("", (i == 4 || i == 9) ? -1 : 0, CourseID);  //0表示可选
                 theModel->setItem(i, j, item);
             }
             else
             {

             }
             item->setFlags(item->flags() & ~Qt::ItemIsEditable); // 将项设置为只读
             item->setTextAlignment(Qt::AlignCenter);

        }
    }

}

void zgnep_courseEdit::updateCourse()
{
    zgnep_course_item *model = zgnep_course_item::getModelBYCourseID(CourseID);
    auto mp = model->courseMap;
    mp.clear();
    for(int i = 0; i < theModel->rowCount(); i++)
    {
        for(int j = 0; j < theModel->columnCount(); j++)
        {
           zgnepStandEditItem *model =  dynamic_cast<zgnepStandEditItem*>(theModel->item(i, j));
           if(model->flag == 1)
           {
                mp[j + 1].push_back(i + 1 - (i > 3) - (i > 8));
           }
        }
    }
    model->courseMap = mp;
}

void zgnep_courseEdit::on_pushButton_clicked()
{
    this->close();
}

void zgnep_courseEdit::on_pushButton_2_clicked()
{
    updateCourse();
    zgnep_course::WriteCourseInfo();
    this->close();
}
