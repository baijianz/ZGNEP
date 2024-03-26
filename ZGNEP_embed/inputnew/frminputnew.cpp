#pragma execution_character_set("utf-8")

#include "frminputnew.h"
#include "ui_frminputnew.h"
#include <QDesktopWidget>
frmInputNew *frmInputNew::self = NULL;
frmInputNew *frmInputNew::Instance()
{
    if (!self)
    {
        static QMutex mutex;
        QMutexLocker locker(&mutex);
        if (!self)
        {
            self = new frmInputNew;
        }
    }

    return self;
}

frmInputNew::frmInputNew(QWidget *parent) : QDialog(parent), ui(new Ui::frmInputNew)
{
    //修改1:只有数字键盘和字母键盘,数字键盘大小(320x320),字母键盘大小(500x320)
    //widgetMain控件改成stackedWidgetMain,添加字母键盘UI和数字键盘UI
    //修改2:widgetTop控件隐藏
    ui->setupUi(this);
    this->initProperty();
    this->initForm();
    QTimer::singleShot(1000, this, SLOT(initDb()));
}

frmInputNew::~frmInputNew()
{
    timerPress->stop();
    delete ui;
}

void frmInputNew::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton)) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void frmInputNew::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::RightButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }

}

void frmInputNew::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

//事件过滤器,用于识别鼠标单击汉字标签处获取对应汉字
bool frmInputNew::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if (mouseEvent->button() == Qt::LeftButton)
        {
            if (obj == ui->labCh1)
            {
                setChinese(0);
            }
            else if (obj == ui->labCh2)
            {
                setChinese(1);
            }
            else if (obj == ui->labCh3)
            {
                setChinese(2);
            }
            else if (obj == ui->labCh4)
            {
                setChinese(3);
            }
            else if (obj == ui->labCh5)
            {
                setChinese(4);
            }
            else if (currentEditType != "" && obj != ui->btnClose)
            {
                QString objName = obj->objectName();
                //qDebug()<<"objName:"<<objName;
                if (obj->parent() != 0x0 && !obj->property("noinput").toBool() && objName != "frmMainWindow"
                        && objName != "frmInputWindow" && objName != "qt_edit_menu" && objName != "labPY" && objName != "stackedWidgetMain")
                {
                    if (obj->inherits("QGroupBox") || obj->inherits("QFrame") || obj->inherits("QMenu"))
                    {
                        this->hide();
                    }
                    else
                    {
                        showPanel();
                    }
                }
            }

            btnPress = (QPushButton *)obj;
            if (checkPress())
            {
                isPress = true;
                timerPress->start(500);
            }

            return false;
        }
    }
    else if (event->type() == QEvent::MouseButtonRelease)
    {
        btnPress = (QPushButton *)obj;
        if (checkPress())
        {
            btnPress->setAttribute(Qt::WA_UnderMouse, false);
            QHoverEvent hoverEvent(QEvent::HoverLeave, QPoint(4, 4), QPoint(0, 0));
            QApplication::sendEvent(btnPress, &hoverEvent);
            isPress = false;
            timerPress->stop();
        }

        return false;
    }
    else if (event->type() == QEvent::KeyPress)
    {
        //如果输入法窗体不可见,则不需要处理
        if (!isVisible() && !mini)
        {
            return QWidget::eventFilter(obj, event);
        }

        QString labText = ui->labPY->text();
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);

        //Shift切换输入法模式,esc键关闭输入法面板,空格取第一个汉字,退格键删除
        //中文模式下回车键取拼音,中文模式下当没有拼音时可以输入空格
        if (keyEvent->key() == Qt::Key_Space)
        {
            if (labText != "")
            {
                ui->labPY->setText("");
                setChinese(0);
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (keyEvent->key() == Qt::Key_Return || keyEvent->key() == Qt::Key_Enter)
        {
            if (labText != "")
            {
                insertValue(labText);
                ui->labPY->setText("");
                selectChinese();
            }
            else
            {
                this->setVisible(false);
            }

            return true;
        }
        else if (keyEvent->key() == Qt::Key_Control)
        {
            if (mini)
            {
                ui->btnType->click();
                return true;
            }
        }
        else if (keyEvent->key() == Qt::Key_Shift)
        {
            if (!mini)
            {
                ui->btnType->click();
                return true;
            }
        }
        else if (keyEvent->key() == Qt::Key_Escape)
        {
            ui->btnClose->click();
            return true;
        }
        else if (keyEvent->key() == Qt::Key_Backspace)
        {
            if (inputType == "chinese")
            {
                QString txt = labText;
                int len = txt.length();
                if (len > 0)
                {
                    ui->labPY->setText(txt.left(len - 1));
                    selectChinese();
                    return true;
                }
            }
        }
        else if (keyEvent->key() == Qt::Key_CapsLock)
        {
            ui->btnUpper->click();
            return true;
        }
        else if (keyEvent->text() == "+" || keyEvent->text() == "=")
        {
            if (labText != "")
            {
                ui->btnNext->click();
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (keyEvent->text() == "-" || keyEvent->text() == "_")
        {
            if (labText != "")
            {
                ui->btnPre->click();
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (currentEditType == "QWidget")
            {
                return false;
            }

            QString key;
            if (inputType == "chinese")
            {
                key = keyEvent->text();
            }
            else if (inputType == "english")
            {
                if (upper)
                {
                    key = keyEvent->text().toUpper();
                }
                else
                {
                    key = keyEvent->text().toLower();
                }
            }

            if (!key.isEmpty())
            {
                QList<QPushButton *> btn = this->findChildren<QPushButton *>();
                foreach (QPushButton *b, btn)
                {
                    QString text = b->text();
                    if (!text.isEmpty() && text == key)
                    {
                        b->click();
                        return true;
                    }
                }
            }
        }

        return false;
    }

    return QWidget::eventFilter(obj, event);
}

void frmInputNew::initProperty()
{
    ui->btnDot->setProperty("btnOther", true);
    ui->btnSpace->setProperty("btnOther", true);
    ui->btnEnter->setProperty("btnOther", true);
    ui->btnDelete->setProperty("btnOther", true);
    ui->btnUpper->setProperty("btnOther", true);

    ui->btnDot_->setProperty("btnOther", true);
    ui->btnEnter_->setProperty("btnOther", true);
    ui->btnDelete_->setProperty("btnOther", true);

    ui->btn0->setProperty("btnNum", true);
    ui->btn1->setProperty("btnNum", true);
    ui->btn2->setProperty("btnNum", true);
    ui->btn3->setProperty("btnNum", true);
    ui->btn4->setProperty("btnNum", true);
    ui->btn5->setProperty("btnNum", true);
    ui->btn6->setProperty("btnNum", true);
    ui->btn7->setProperty("btnNum", true);
    ui->btn8->setProperty("btnNum", true);
    ui->btn9->setProperty("btnNum", true);

    ui->btn0_->setProperty("btnNum", true);
    ui->btn1_->setProperty("btnNum", true);
    ui->btn2_->setProperty("btnNum", true);
    ui->btn3_->setProperty("btnNum", true);
    ui->btn4_->setProperty("btnNum", true);
    ui->btn5_->setProperty("btnNum", true);
    ui->btn6_->setProperty("btnNum", true);
    ui->btn7_->setProperty("btnNum", true);
    ui->btn8_->setProperty("btnNum", true);
    ui->btn9_->setProperty("btnNum", true);

    ui->btna->setProperty("btnLetter", true);
    ui->btnb->setProperty("btnLetter", true);
    ui->btnc->setProperty("btnLetter", true);
    ui->btnd->setProperty("btnLetter", true);
    ui->btne->setProperty("btnLetter", true);
    ui->btnf->setProperty("btnLetter", true);
    ui->btng->setProperty("btnLetter", true);
    ui->btnh->setProperty("btnLetter", true);
    ui->btni->setProperty("btnLetter", true);
    ui->btnj->setProperty("btnLetter", true);
    ui->btnk->setProperty("btnLetter", true);
    ui->btnl->setProperty("btnLetter", true);
    ui->btnm->setProperty("btnLetter", true);
    ui->btnn->setProperty("btnLetter", true);
    ui->btno->setProperty("btnLetter", true);
    ui->btnp->setProperty("btnLetter", true);
    ui->btnq->setProperty("btnLetter", true);
    ui->btnr->setProperty("btnLetter", true);
    ui->btns->setProperty("btnLetter", true);
    ui->btnt->setProperty("btnLetter", true);
    ui->btnu->setProperty("btnLetter", true);
    ui->btnv->setProperty("btnLetter", true);
    ui->btnw->setProperty("btnLetter", true);
    ui->btnx->setProperty("btnLetter", true);
    ui->btny->setProperty("btnLetter", true);
    ui->btnz->setProperty("btnLetter", true);

    labCh.append(ui->labCh1);
    labCh.append(ui->labCh2);
    labCh.append(ui->labCh3);
    labCh.append(ui->labCh4);
    labCh.append(ui->labCh5);
}

void frmInputNew::initForm()
{
    QDesktopWidget desk;
    //deskWidth = desk.availableGeometry().width();
    //deskHeight = desk.availableGeometry().height();
    deskWidth = 800;
    deskHeight = 500;
    dbPath = qApp->applicationDirPath();
    mousePoint = QPoint();
    mousePressed = false;
    upper = false;

    isPress = false;
    timerPress = new QTimer(this);
    connect(timerPress, SIGNAL(timeout()), this, SLOT(reClicked()));

    currentWidget = 0;
    currentLineEdit = 0;
    currentTextEdit = 0;
    currentPlain = 0;
    currentBrowser = 0;
    currentEditType = "";

    labStatus = new QLabel;
    labStatus->setAttribute(Qt::WA_TranslucentBackground);
    labStatus->setAlignment(Qt::AlignCenter);
    labStatus->setPixmap(QPixmap(":/image/status_en.png"));
    labStatus->setFixedSize(53, 27);
    labStatus->move(deskWidth - 58, deskHeight - 30);

#if (QT_VERSION > QT_VERSION_CHECK(5,0,0))
    setWindowFlags(Qt::Tool | Qt::WindowDoesNotAcceptFocus | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
    labStatus->setWindowFlags(Qt::Tool | Qt::WindowDoesNotAcceptFocus | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
#else
    setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
    labStatus->setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
#endif

    //输入法面板的字体名称和按钮字体大小即汉字区域字体大小
#ifdef RK_PLATFORM
    setFontInfo(this->font().family(), 6, 6);
#else
    setFontInfo(this->font().family(), 15, 15);
#endif

    //输入法面板的固定大小
    setFrmSize(500, 320);
    //图标固定大小
    setIcoSize(20, 20);
    //按钮之间的间隔
    setSpacing(6);
    //顶部汉字区域高度
    setTopHeight(60);

    //当前完整模式 false--完整模式有整个按键面板 true--迷你模式只有中英状态悬浮条和汉字备选栏
    setMini(false);

    //输入法面板的显示位置  control--显示在对应输入框的正下方 bottom--填充显示在底部  center--窗体居中显示
    setPosition("bottom");

    //输入法面板的样式  blue--淡蓝色   black--黑色  brown--灰黑色  gray--灰色  silvery--银色
    setStyle("black");

    //输入法模式 english--英文模式  chinese--中文模式  handwrite--手写模式  char--特殊字符模式
    setInputType("english");

    QList<QPushButton *> btn = this->findChildren<QPushButton *>();
    foreach (QPushButton *b, btn)
    {
        connect(b, SIGNAL(clicked()), this, SLOT(btnClicked()));
    }

    //绑定全局改变焦点信号槽
    connect(qApp, SIGNAL(focusChanged(QWidget *, QWidget *)), this, SLOT(focusChanged(QWidget *, QWidget *)));

    //绑定按键事件过滤器
    qApp->installEventFilter(this);
}

void frmInputNew::initDb()
{

    QSqlDatabase dbConn = QSqlDatabase::addDatabase("QSQLITE", "py");
    dbConn.setDatabaseName(dbPath + "/py.db");
    if(!dbConn.open())
    {
        qDebug() << "打开数据库失败";
    }
}

bool frmInputNew::checkPress()
{
    //只有属于输入法键盘的合法按钮才继续处理
    bool num_ok = btnPress->property("btnNum").toBool();
    bool other_ok = btnPress->property("btnOther").toBool();
    bool letter_ok = btnPress->property("btnLetter").toBool();

    if (num_ok || other_ok || letter_ok)
    {
        return true;
    }

    return false;
}

void frmInputNew::reClicked()
{
    if (isPress)
    {
        timerPress->setInterval(300);
        btnPress->click();
    }
}

void frmInputNew::btnClicked()
{
    //如果当前焦点控件类型为空,则返回不需要继续处理
    if (currentEditType == "")
    {
        return;
    }

    QString labText = ui->labPY->text();
    QPushButton *btn = (QPushButton *)sender();
    QString objectName = btn->objectName();

    if (objectName == "btnType_")
    {
        if (inputType == "english")
        {
            ui->stackedWidgetMain->setCurrentIndex(0);//字母+数字
            setFrmSize(500, 320);
        }

    }
    else if (objectName == "btnType")
    {
        if (inputType == "english")
        {
            //setInputType("chinese");
            ui->stackedWidgetMain->setCurrentIndex(1);//纯数字
            setFrmSize(320, 320);
        }
        else if (inputType == "chinese")
        {
            if (mini)
            {
                setInputType("english");
            }
            else
            {
                setInputType("char");
            }
        }
        else if (inputType == "char")
        {
            setInputType("english");
        }

        upper = false;
        setUpper(upper);
    }
    else if (objectName == "btnUpper")
    {
        //大小写模式都要切换到英文状态
        setInputType("english");

        upper = !upper;
        setUpper(upper);
    }
    else if (objectName == "btnDelete"||objectName == "btnDelete_")
    {
        //如果当前是中文模式,则删除对应拼音,删除完拼音之后再删除对应文本输入框的内容
        if (inputType == "chinese")
        {
            QString txt = labText;
            int len = txt.length();

            if (len > 0)
            {
                ui->labPY->setText(txt.left(len - 1));
                selectChinese();
            }
            else
            {
                deleteValue();
            }
        }
        else
        {
            deleteValue();
        }
    }
    else if (objectName == "btnPre")
    {
        if (currentPYIndex >= 10)
        {
            //每次最多显示 5 个汉字,所以每次向前的时候索引要减 5 * 2
            if (currentPYIndex % 5 == 0)
            {
                currentPYIndex -= 10;
            }
            else
            {
                currentPYIndex = currentPYCount - (currentPYCount % 5) - 5;
            }
        }
        else
        {
            currentPYIndex = 0;
        }

        showChinese();
    }
    else if (objectName == "btnNext")
    {
        if (currentPYIndex < currentPYCount - 1)
        {
            showChinese();
        }
    }
    else if (objectName == "btnClose"||objectName == "btnClose_")
    {
        this->setVisible(false);
        clearChinese();
        ui->labPY->setText("");
    }
    else if (objectName == "btnSpace")
    {
        //如果中文模式而且有待输入字母,判断是否有中文则插入第一个中文否则插入字母
        if (inputType == "chinese" && labText != "")
        {
            if (ui->labCh1->text().isEmpty())
            {
                insertValue(labText);
            }
            else
            {
                setChinese(0);
            }
        }
        else
        {
            insertValue(" ");
        }
    }
    else if (objectName == "btnEnter"||objectName == "btnEnter_")
    {
        //如果中文模式而且有待输入字母则立即插入字母
        if (inputType == "chinese" && labText != "")
        {
            insertValue(labText);
        }

        if (currentLineEdit != 0)
        {
            this->setVisible(false);
            QKeyEvent keyPress(QEvent::KeyPress, Qt::Key_Enter, Qt::NoModifier, QString("\n"));
            QApplication::sendEvent(currentLineEdit, &keyPress);
        }
        else
        {
            insertValue("\n");
        }
    }
    else
    {
        QString value = btn->text();

        //如果是&按钮，因为对应&被过滤,所以真实的text为去除前面一个&字符
        if (value == "&&")
        {
            value = "&";
        }

        //当前不是中文模式,则单击按钮对应text为传递参数
        if (inputType != "chinese")
        {
            insertValue(value);
        }
        else
        {
            //中文模式下,不允许输入特殊字符,单击对应数字按键取得当前索引的汉字
            if (btn->property("btnOther").toBool())
            {
                if (labText.length() == 0)
                {
                    insertValue(value);
                }
            }
            else if (btn->property("btnNum").toBool())
            {
                if (labText.length() == 0)
                {
                    insertValue(value);
                }
                else if (objectName == "btn1")
                {
                    setChinese(0);
                }
                else if (objectName == "btn2")
                {
                    setChinese(1);
                }
                else if (objectName == "btn3")
                {
                    setChinese(2);
                }
                else if (objectName == "btn4")
                {
                    setChinese(3);
                }
                else if (objectName == "btn5")
                {
                    setChinese(4);
                }
            }
            else if (btn->property("btnLetter").toBool())
            {
                ui->labPY->setText(labText + value);
                selectChinese();
            }
        }
    }
}

void frmInputNew::focusChanged(QWidget *oldWidget, QWidget *nowWidget)
{
    //qDebug() << "oldWidget:" << oldWidget << "nowWidget:" << nowWidget;
    if (nowWidget != 0 && !this->isAncestorOf(nowWidget))
    {
        //在Qt5和linux系统中(嵌入式linux除外),当输入法面板关闭时,焦点会变成无,然后焦点会再次移到焦点控件处
        //这样导致输入法面板的关闭按钮不起作用,关闭后马上有控件获取焦点又显示.
        //为此,增加判断,当焦点是从有对象转为无对象再转为有对象时不要显示.
        //这里又要多一个判断,万一首个窗体的第一个焦点就是落在可输入的对象中,则要过滤掉
        static bool isFirst = true;
#ifndef __arm__
        if (oldWidget == 0x0 && !isFirst)
        {
            QTimer::singleShot(0, this, SLOT(hide()));
            return;
        }
#endif

        //如果对应属性noinput为真则不显示
        if (nowWidget->property("noinput").toBool())
        {
            QTimer::singleShot(0, this, SLOT(hide()));
            return;
        }

        isFirst = false;

        if (nowWidget->inherits("QLineEdit"))
        {
            currentLineEdit = (QLineEdit *)nowWidget;
            currentEditType = "QLineEdit";
            showPanel();
        }
        else if (nowWidget->inherits("QTextEdit"))
        {
            currentTextEdit = (QTextEdit *)nowWidget;
            currentEditType = "QTextEdit";
            showPanel();
        }
        else if (nowWidget->inherits("QPlainTextEdit"))
        {
            currentPlain = (QPlainTextEdit *)nowWidget;
            currentEditType = "QPlainTextEdit";
            showPanel();
        }
        else if (nowWidget->inherits("QTextBrowser"))
        {
            currentBrowser = (QTextBrowser *)nowWidget;
            currentEditType = "QTextBrowser";
            showPanel();
        }
        else if (nowWidget->inherits("QComboBox"))
        {
            QComboBox *cbox = (QComboBox *)nowWidget;

            //只有当下拉选择框处于编辑模式才可以输入
            if (cbox->isEditable())
            {
                currentLineEdit = cbox->lineEdit() ;
                currentEditType = "QLineEdit";
                showPanel();
            }
        }
        else if (nowWidget->inherits("QWidget") &&
                 !nowWidget->inherits("QAbstractButton") &&
                 !nowWidget->inherits("QAbstractSlider") &&
                 !nowWidget->inherits("QComboBoxListView") &&
                 !nowWidget->inherits("QTableView") &&
                 !nowWidget->inherits("QListView") &&
                 !nowWidget->inherits("QTreeView") &&
                 !nowWidget->inherits("QFrame"))
        {
            if (nowWidget->focusPolicy() != Qt::NoFocus)
            {
                currentWidget = nowWidget;
                currentEditType = "QWidget";
                showPanel();
            }
            else
            {
                currentEditType = "";
                this->setVisible(false);
            }
        }
        else
        {
            //需要将输入法切换到最初的原始状态--小写,同时将之前的对象指针置为零
            currentWidget = 0;
            currentLineEdit = 0;
            currentTextEdit = 0;
            currentPlain = 0;
            currentBrowser = 0;
            currentEditType = "";

            setInputType("english");
            this->setVisible(false);
        }

        //根据用户选择的输入法位置设置-居中显示-底部填充-显示在输入框正下方
        if (position == "center")
        {
            QPoint pos = QPoint(deskWidth / 2 - frmWidth / 2, deskHeight / 2 - frmHeight / 2);
            this->setGeometry(pos.x(), pos.y(), frmWidth, frmHeight);
        }
        else if (position == "bottom")
        {
            this->setGeometry(0, deskHeight - frmHeight, deskWidth, frmHeight);
        }
        else if (position == "control")
        {
            QRect rect = nowWidget->rect();
            QPoint pos = QPoint(rect.left(), rect.bottom() + 2);
            pos = nowWidget->mapToGlobal(pos);

            int x = pos.x();
            int y = pos.y();

            if (pos.x() + frmWidth > deskWidth)
            {
                x = deskWidth - frmWidth;
            }

            if (pos.y() + frmHeight > deskHeight)
            {
                y = pos.y() - frmHeight - rect.height() - 2;
            }

            this->setGeometry(x, y, frmWidth, frmHeight);
        }
    }
}

void frmInputNew::selectChinese()
{
    //清空汉字
    clearChinese();

    QString currentPY = ui->labPY->text();
    //QSqlQuery query(QSqlDatabase::database("py"));
    QSqlQuery query(QSqlDatabase::database(dbPath + "/py.db",true));
//    QSqlDatabase dbConn1 = QSqlDatabase::addDatabase("QSQLITE", "py");
//    dbConn1.setDatabaseName(dbPath + "/py.db");
//    dbConn1.open();
//    QSqlQuery query(dbConn1);
    QString sql = QString("select word from pinyin where pinyin='%1'").arg(currentPY);
    if(!query.exec(sql))
    {
        qDebug() << query.lastError();
    }

    //逐个将查询到的字词加入汉字队列
    while (query.next())
    {
        QString result = query.value(0).toString();
        QStringList list = result.split(" ");
        foreach (QString txt, list)
        {
            if (txt.length() > 0)
            {
                allPY.append(txt);
                currentPYCount++;
            }
        }
    }

    //显示汉字
    showChinese();
    //自动计算汉字长度隐藏多余标签
    checkChinese();
}

void frmInputNew::showChinese()
{
    //每个版面最多显示 chineseCount 个汉字
    int count = 0;
    currentPY.clear();

    for (int i = 0; i < labCh.count(); i++)
    {
        labCh.at(i)->setText("");
    }

    for (int i = currentPYIndex; i < currentPYCount; i++)
    {
        if (count == 5)
        {
            break;
        }

        QString txt = QString("%1. %2").arg(count + 1).arg(allPY.at(currentPYIndex));
        currentPY.append(allPY.at(currentPYIndex));
        labCh.at(count)->setText(txt);
        count++;
        currentPYIndex++;
    }

    //qDebug() << "currentPYIndex:" << currentPYIndex << "currentPYCount:" << currentPYCount;
}

void frmInputNew::checkChinese()
{
    //根据当前汉字长度自动隐藏标签
    int len = ui->labCh1->text().length();
    if (len > 16)
    {
        ui->labCh1->setVisible(true);
        ui->labCh2->setVisible(false);
        ui->labCh3->setVisible(false);
        ui->labCh4->setVisible(false);
        ui->labCh5->setVisible(false);
    }
    else if (len > 12)
    {
        ui->labCh1->setVisible(true);
        ui->labCh2->setVisible(true);
        ui->labCh3->setVisible(false);
        ui->labCh4->setVisible(false);
        ui->labCh5->setVisible(false);
    }
    else if (len > 8)
    {
        ui->labCh1->setVisible(true);
        ui->labCh2->setVisible(true);
        ui->labCh3->setVisible(true);
        ui->labCh4->setVisible(false);
        ui->labCh5->setVisible(false);
    }
    else if (len > 4)
    {
        ui->labCh1->setVisible(true);
        ui->labCh2->setVisible(true);
        ui->labCh3->setVisible(true);
        ui->labCh4->setVisible(true);
        ui->labCh5->setVisible(false);
    }
    else
    {
        ui->labCh1->setVisible(true);
        ui->labCh2->setVisible(true);
        ui->labCh3->setVisible(true);
        ui->labCh4->setVisible(true);
        ui->labCh5->setVisible(true);
    }
}

void frmInputNew::insertValue(const QString &v)
{
    QString value = v;
    if (currentEditType == "QLineEdit")
    {
        currentLineEdit->insert(currentLineEdit->property("upper").toBool() ? value.toUpper() : value);
    }
    else if (currentEditType == "QTextEdit")
    {
        currentTextEdit->insertPlainText(currentTextEdit->property("upper").toBool() ? value.toUpper() : value);
    }
    else if (currentEditType == "QPlainTextEdit")
    {
        currentPlain->insertPlainText(currentPlain->property("upper").toBool() ? value.toUpper() : value);
    }
    else if (currentEditType == "QTextBrowser")
    {
        currentBrowser->insertPlainText(currentBrowser->property("upper").toBool() ? value.toUpper() : value);
    }
    else if (currentEditType == "QWidget")
    {
        QStringList list = value.split("");
        foreach (QString str, list)
        {
            if (!str.isEmpty())
            {
                QKeyEvent keyPress(QEvent::KeyPress, 0, Qt::NoModifier, QString(str));
                QApplication::sendEvent(currentWidget, &keyPress);
            }
        }
    }

    ui->labPY->setText("");
}

void frmInputNew::deleteValue()
{
    if (currentEditType == "QLineEdit")
    {
        currentLineEdit->backspace();
    }
    else if (currentEditType == "QTextEdit")
    {
        QKeyEvent keyPress(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier, QString());
        QApplication::sendEvent(currentTextEdit, &keyPress);
    }
    else if (currentEditType == "QPlainTextEdit")
    {
        QKeyEvent keyPress(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier, QString());
        QApplication::sendEvent(currentPlain, &keyPress);
    }
    else if (currentEditType == "QTextBrowser")
    {
        QKeyEvent keyPress(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier, QString());
        QApplication::sendEvent(currentBrowser, &keyPress);
    }
    else if (currentEditType == "QWidget")
    {
        QKeyEvent keyPress(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier, QString());
        QApplication::sendEvent(currentWidget, &keyPress);
    }
}

void frmInputNew::setChinese(int index)
{
    int count = currentPY.count();
    if (count > index)
    {
        insertValue(currentPY.at(index));
        //添加完一个汉字后,清空当前汉字信息,等待重新输入
        clearChinese();
        ui->labPY->setText("");
    }
}

void frmInputNew::clearChinese()
{
    //清空汉字,重置索引
    for (int i = 0; i < labCh.count(); i++)
    {
        labCh.at(i)->setText("");
    }

    allPY.clear();
    currentPY.clear();
    currentPYIndex = 0;
    currentPYCount = 0;
}

void frmInputNew::setFrmSize(int frmWidth, int frmHeight)
{
    this->frmWidth = frmWidth;
    this->frmHeight = frmHeight;
    //this->setMinimumSize(frmWidth, frmHeight);
    this->setFixedSize(frmWidth, frmHeight);
}

void frmInputNew::setIcoSize(int icoWidth, int icoHeight)
{
    QSize icoSize(icoWidth, icoHeight);
    QSize icoSize2(icoWidth - 5, icoHeight - 5);
    QSize icoSize3(icoWidth + 3, icoHeight + 3);
    ui->btnDelete->setIconSize(icoSize3);
    ui->btnSpace->setIconSize(icoSize);
    ui->btnClose->setIconSize(icoSize);
    ui->btnType->setIconSize(icoSize);
    ui->btnEnter->setIconSize(icoSize2);
    ui->btnUpper->setIconSize(icoSize2);


    ui->btnClose_->setIconSize(icoSize);
    ui->btnDelete_->setIconSize(icoSize);
    ui->btnSpace_->setIconSize(icoSize);
    ui->btnEnter_->setIconSize(icoSize);
}

void frmInputNew::setSpacing(int spacing)
{
    //ui->widgetMain->layout()->setSpacing(spacing);
    ui->stackedWidgetMain->layout()->setSpacing(spacing);
    ui->widgetPreNext->layout()->setSpacing(spacing);
}

void frmInputNew::setTopHeight(int topHeight)
{
    ui->widgetTop->setFixedHeight(topHeight);
}

void frmInputNew::setMini(bool mini)
{
    this->mini = mini;
    if (mini)
    {
        labStatus->setVisible(true);
        //ui->widgetMain->setVisible(false);
        ui->stackedWidgetMain->setVisible(false);
        ui->widgetPreNext->setVisible(false);
        ui->widgetTop->layout()->setContentsMargins(9, 9, 9, 9);
        ui->verticalSpacer->changeSize(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
    }
    else
    {
        labStatus->setVisible(false);
        //ui->widgetMain->setVisible(true);
        ui->stackedWidgetMain->setVisible(true);
        ui->widgetPreNext->setVisible(true);
        ui->widgetTop->layout()->setContentsMargins(9, 9, 9, 0);
        ui->verticalSpacer->changeSize(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);
    }
}

void frmInputNew::setPosition(const QString &position)
{
    this->position = position;
}

void frmInputNew::setStyle(const QString &style)
{
    QString icoType = "white";
    if (style == "blue")
    {
        setColor("#377FC9", "#F3F3F3", "#4189D3", "#386487", "#F3F3F3", "#386487", "#F3F3F3");
    }
    else if (style == "gray")
    {
        setColor("#989898", "#FFFFFF", "#A2A2A2", "#333333", "#F3F3F3", "#2E2E2E", "#F3F3F3");
    }
    else if (style == "black")
    {
        setColor("#191919", "#F3F3F3", "#313131", "#4189D3", "#F3F3F3", "#F95717", "#F3F3F3");
    }
    else if (style == "brown")
    {
        setColor("#667481", "#F3F3F3", "#566373", "#4189D3", "#F3F3F3", "#4189D3", "#F3F3F3");
    }
    else if (style == "silvery")
    {
        setColor("#868690", "#000002", "#C3C2C7", "#393939", "#EFEFEF", "#393939", "#EFEFEF");
        icoType = "black";
    }

    QString ico_upper = QString(":/image/upper_%1.png").arg(icoType);
    QString ico_delete = QString(":/image/delete_%1.png").arg(icoType);
    QString ico_enter = QString(":/image/enter_%1.png").arg(icoType);
    QString ico_close = QString(":/image/close_%1.png").arg(icoType);
    QString ico_space = QString(":/image/space_%1.png").arg(icoType);

    ui->btnUpper->setIcon(QIcon(ico_upper));
    ui->btnClose->setIcon(QIcon(ico_close));
    ui->btnDelete->setIcon(QIcon(ico_delete));
    ui->btnSpace->setIcon(QIcon(ico_space));
    ui->btnEnter->setIcon(QIcon(ico_enter));

    ui->btnClose_->setIcon(QIcon(ico_close));
    ui->btnDelete_->setIcon(QIcon(ico_delete));
    ui->btnSpace_->setIcon(QIcon(ico_space));
    ui->btnEnter_->setIcon(QIcon(ico_enter));
}

void frmInputNew::setColor(const QString &mainBackgroundColor, const QString &mainTextColor, const QString &btnBackgroundColor,
                           const QString &btnHoveColor, const QString &btnHoveTextColor, const QString &labHoveColor, const QString &labHoveTextColor)
{
    QStringList qss;
    qss.append(QString("QWidget#widgetPreNext{background:none;}"));
    //qss.append(QString("QWidget#widgetMain,QWidget#widgetTop{background-color:%1;}").arg(mainBackgroundColor));
    qss.append(QString("QStackedWidget#stackedWidgetMain,QWidget#widgetTop{background-color:%1;}").arg(mainBackgroundColor));
    qss.append(QString("QPushButton{border-width:0px;border-radius:3px;color:%1;}").arg(mainTextColor));
    qss.append(QString("QPushButton{padding:0px;background-color:%1;}").arg(btnBackgroundColor));
    qss.append(QString("QPushButton:pressed,QPushButton:hover{background-color:%1;color:%2;}").arg(btnHoveColor).arg(btnHoveTextColor));
    qss.append(QString("QLabel{border-width:0px;border-radius:3px;color:%1;background:none;}").arg(mainTextColor));
    qss.append(QString("QLabel:pressed,QLabel:hover{background-color:%1;color:%2;}").arg(labHoveColor).arg(labHoveTextColor));

    if (mini)
    {
        qss.append(QString("QWidget#widgetTop{border-radius:5px;}"));
    }

    this->setStyleSheet(qss.join(""));
}

void frmInputNew::setFontInfo(const QString &fontName, int btnFontSize, int labFontSize)
{
    QFont btnFont(fontName, btnFontSize);
    QFont labFont(fontName, labFontSize);

    //QList<QPushButton *> btns = ui->widgetMain->findChildren<QPushButton *>();
    QList<QPushButton *> btns = ui->stackedWidgetMain->findChildren<QPushButton *>();

    foreach (QPushButton *btn, btns)
    {
        btn->setFont(btnFont);
    }

    QList<QLabel *> labs = ui->widgetTop->findChildren<QLabel *>();
    foreach (QLabel *lab, labs)
    {
        lab->setFont(labFont);
    }

    ui->btnPre->setFont(btnFont);
    ui->btnNext->setFont(btnFont);
}

void frmInputNew::setDbPath(const QString &dbPath)
{
    this->dbPath = dbPath;
}

void frmInputNew::setInputType(const QString &inputType)
{
    this->inputType = inputType;
    if (inputType == "english")
    {
        //ui->btnType->setText("En");
        ui->btnType->setText("123");
        //ui->widgetTop->setEnabled(false);
        ui->widgetTop->setVisible(false);
        showChar(false);
        labStatus->setPixmap(QPixmap(":/image/status_en.png"));

        if (mini)
        {
            this->hide();
        }
    }

    else if (inputType == "chinese")
    {
        ui->btnType->setText("中");
        ui->widgetTop->setEnabled(true);
        showChar(false);
        labStatus->setPixmap(QPixmap(":/image/status_ch.png"));

        if (mini)
        {
            this->show();
        }
    }
    else if (inputType == "char")
    {
        ui->btnType->setText("符");
        ui->widgetTop->setEnabled(false);
        showChar(true);
    }

    //每次切换到模式,都要执行清空之前中文模式下的信息
    clearChinese();
    ui->labPY->setText("");
}

void frmInputNew::setUpper(bool isUpper)
{
    QList<QPushButton *> btn = this->findChildren<QPushButton *>();
    foreach (QPushButton *b, btn)
    {
        if (b->property("btnLetter").toBool())
        {
            if (isUpper)
            {
                b->setText(b->text().toUpper());
            }
            else
            {
                b->setText(b->text().toLower());
            }
        }
    }
}

void frmInputNew::showChar(bool isChar)
{
    if (isChar)
    {
        ui->btn1->setText("!");
        ui->btn2->setText("@");
        ui->btn3->setText("#");
        ui->btn4->setText("$");
        ui->btn5->setText("%");
        ui->btn6->setText("^");
        ui->btn7->setText("&&");
        ui->btn8->setText("*");
        ui->btn9->setText("(");
        ui->btn0->setText(")");

        ui->btnq->setText("~");
        ui->btnw->setText("`");
        ui->btne->setText("-");
        ui->btnr->setText("_");
        ui->btnt->setText("+");
        ui->btny->setText("=");
        ui->btnu->setText("{");
        ui->btni->setText("}");
        ui->btno->setText("[");
        ui->btnp->setText("]");

        ui->btna->setText("|");
        ui->btns->setText("\\");
        ui->btnd->setText(":");
        ui->btnf->setText(";");
        ui->btng->setText("\"");
        ui->btnh->setText("'");
        ui->btnj->setText("<");
        ui->btnk->setText(">");
        ui->btnl->setText("?");

        ui->btnz->setText(",");
        ui->btnx->setText("/");
        ui->btnc->setText("：");
        ui->btnv->setText("，");
        ui->btnb->setText("。");
        ui->btnn->setText("？");
        ui->btnm->setText("；");
    }
    else
    {
        ui->btn1->setText("1");
        ui->btn2->setText("2");
        ui->btn3->setText("3");
        ui->btn4->setText("4");
        ui->btn5->setText("5");
        ui->btn6->setText("6");
        ui->btn7->setText("7");
        ui->btn8->setText("8");
        ui->btn9->setText("9");
        ui->btn0->setText("0");

        ui->btnq->setText("q");
        ui->btnw->setText("w");
        ui->btne->setText("e");
        ui->btnr->setText("r");
        ui->btnt->setText("t");
        ui->btny->setText("y");
        ui->btnu->setText("u");
        ui->btni->setText("i");
        ui->btno->setText("o");
        ui->btnp->setText("p");

        ui->btna->setText("a");
        ui->btns->setText("s");
        ui->btnd->setText("d");
        ui->btnf->setText("f");
        ui->btng->setText("g");
        ui->btnh->setText("h");
        ui->btnj->setText("j");
        ui->btnk->setText("k");
        ui->btnl->setText("l");

        ui->btnz->setText("z");
        ui->btnx->setText("x");
        ui->btnc->setText("c");
        ui->btnv->setText("v");
        ui->btnb->setText("b");
        ui->btnn->setText("n");
        ui->btnm->setText("m");
    }
}

void frmInputNew::showPanel()
{
    if (!isEnabled())
    {
        return;
    }

    if (mini && inputType == "english")
    {
        return;
    }

    this->setVisible(true);
    int width = ui->btna->width();
    width = width > 35 ? width : 35;
    ui->btnPre->setFixedWidth(width);
    ui->btnNext->setFixedWidth(width);
}
