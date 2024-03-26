#ifndef ZGNEP_ACCOUNT_GENERAL_H
#define ZGNEP_ACCOUNT_GENERAL_H
#include <QStringList>
#include <QVector>
#include <stdio.h>
#include <unordered_map>

class zgnep_account_general
{
public:
    zgnep_account_general();
    QStringList ReadAccount(); //读取出所有的账户信息,格式为[id, Name, image, password, role, authority]
    static QString readAccountID(QString ID);
    static QString readAccountName(QString ID);
    static QString readAccountImage(QString ID);
    static QString readAccountPssWord(QString ID);
    static QString readAccountRole(QString ID);
    static QStringList readAccountNameList();
    static QString readAccountIDByName(QString name);
    static int ReadAccountAuthority(QString ID);
    static void setAccountName(QString ID, QString data);
    static void setAccountPassWord(QString ID, QString data);
    static void setAccountRole(QString ID, QString data);
    static void setAccountAnthority(QString ID, QString data);
    QVector<QString> accountString;
    static void referish(QString ID, QString profile, QString name, QString pass);
    static void reNewWriteAccount();
    static int verifyAccount(QString ID, QString pass);
    static QString ShowDataBase();
    static QStringList existUser();
    static QString getNewID();
    static bool CheckNameISunique(QString Name);
    static void insertModel(QString ID, QString Name, QString Image, QString pass, QString Role, QString authority);
};

#endif // ZGNEP_ACCOUNT_GENERAL_H
