#include "btndelegate.h"
#include <QApplication>
#include "./messageBox/zgnep_msg.h"
#include "zgnep_admin_usermanange.h"
#include "account/zgnep_account_general.h"
#include <QMessageBox>
#include "./course/zgnep_course.h"
#include "./course/zgnep_courseedit.h"
extern zgnep_admin_userManange *userManageModel;
btnDelegate::btnDelegate(QObject *parent, QString text, int flag):QStyledItemDelegate(parent)
{
    this->Text = text;
    this->flag = flag;
}

void btnDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QStyleOptionButton buttonOption;
    buttonOption.rect = option.rect.adjusted(4, 4, -4, -4);
    buttonOption.text = Text;
    buttonOption.state = QStyle::State_Enabled;
    QApplication::style()->drawControl(QStyle::CE_PushButton, &buttonOption, painter);
}

bool btnDelegate::editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index)
{

    if (event->type() == QEvent::MouseButtonPress) {
        QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
        if (option.rect.contains(mouseEvent->pos())) {
            // 处理按钮点击事件，这里你可以添加相应的操作
            switch (flag) {
                 case 0:
                if(zgnep_msg::zgnep_MsgBox("确认重置？", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, userManageModel))
                {
                     zgnep_msg::zgnep_MsgBox("密码已重置为000000", MSG_TYPE::SA_OKS, MSG_TIP_TYPE::SA_TIPS, userManageModel);
 //                    QMessageBox::information(userManageModel, "*", index.siblingAtColumn(1).data().value<QString>());
                     zgnep_account_general::setAccountPassWord(index.siblingAtColumn(1).data().value<QString>(), "000000");
                }
                break;
                //查看课程安排
            case 1:{
                    zgnep_course *model = new zgnep_course(nullptr, 1, index.siblingAtColumn(1).data().value<QString>());
                    model->show();
                    break;
                    }
                //编辑课程时间
            case 2:{
                    zgnep_courseEdit *model = new zgnep_courseEdit(nullptr, index.siblingAtColumn(1).data().value<QString>());
                    model->show();
                break;}
                //删除科目
                case 3:
            {
                if(zgnep_msg::zgnep_MsgBox("确认删除？该操作不可逆", MSG_TYPE::SA_OKCANCEL, MSG_TIP_TYPE::SA_TIPS, userManageModel))
                {
                    zgnep_course::DeleteCourse(index.siblingAtColumn(1).data().value<QString>());
                }
                    break;
            }
            }

            return true; // 按钮点击事件已处理，返回true
        }
    }
    return QStyledItemDelegate::editorEvent(event, model, option, index);

}
