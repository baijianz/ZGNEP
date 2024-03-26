#include "zgnep_account_general.h"
#include <stdio.h>
#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include <qdebug.h>
#include "zgnep_main.h"
extern ZGNEP_Main *StaticMainMode;
QMap<QString, QVector<QString>> accountMap;
QString loginedAccountID = "";

zgnep_account_general::zgnep_account_general()
{
    QStringList contain = ReadAccount();
    for(int i = 0; i < contain.size(); i++)
    {
        QString s = contain[i].mid(1, contain[i].length() - 2); //去除首尾
        accountString.push_back(s);
    }

    for(int i = 0; i < accountString.size(); i++)
    {
        QStringList s = accountString[i].split('|');
        QVector<QString> temp;
        for(int j = 1; j < s.size(); j++)
        {
            temp.push_back(s[j].trimmed());
        }
        accountMap.insert(s[0], temp);
    }
}

/*
 *  std::ifstream 只能用于读取文件数据；
 *  std::ofstream 只能用于写入文件数据；
 *  std::fstream 可以用于读取和写入文件数据。
 */
QStringList zgnep_account_general::ReadAccount()
{
    QString path = "./account/zgnep_account.zgn";
    QFile file(path);
    QStringList ans;
    if(file.exists())
    {
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&file);
        while(!in.atEnd())
        {
            ans.push_back(in.readLine());
        }
    }
    file.close();
    return  ans;
}

QString zgnep_account_general::readAccountID(QString ID)
{
    if(!accountMap.count(ID)) return  "None";
    return  ID;
}

QString zgnep_account_general::readAccountName(QString ID)
{
    if(!accountMap.count(ID)) return "None";
    return accountMap.value(ID)[0];
}

QString zgnep_account_general::readAccountImage(QString ID)
{
    if(!accountMap.count(ID)) return "None";
    return accountMap.value(ID)[1];
}

QString zgnep_account_general::readAccountPssWord(QString ID)
{
    if(!accountMap.count(ID)) return "None";
    return accountMap.value(ID)[2];
}


QString zgnep_account_general::readAccountRole(QString ID)
{
    if(!accountMap.count(ID)) return "None";
    return accountMap.value(ID)[3];
}

QStringList zgnep_account_general::readAccountNameList()
{
    QStringList ans;
    for(auto iter = accountMap.begin(); iter != accountMap.end(); iter++)
    {
        ans.push_back(readAccountName(iter.key()));
    }
    return  ans;
}

QString zgnep_account_general::readAccountIDByName(QString name)
{
    for(auto iter = accountMap.begin(); iter != accountMap.end(); iter++)
    {
        if(iter.value().count(name)) return iter.key();
    }
    return  "None";
}

int zgnep_account_general::ReadAccountAuthority(QString ID)
{
    if(!accountMap.count(ID)) return 0;
    return accountMap.value(ID)[4].toInt();
}

void zgnep_account_general::setAccountName(QString ID, QString data)
{
    accountMap[ID][0] = data;
}

void zgnep_account_general::setAccountPassWord(QString ID, QString data)
{
    accountMap[ID][2] = data;
}

void zgnep_account_general::setAccountRole(QString ID, QString data)
{
    accountMap[ID][3] = data;
}

void zgnep_account_general::setAccountAnthority(QString ID, QString data)
{
    accountMap[ID][4] = data;
}
//为了省去查找替换的复杂逻辑，我决定采用激进的做法。将字典里面的内容拼起来重写一份账户内容
void zgnep_account_general::referish(QString ID, QString profile, QString name, QString pass)
{
    QFileInfo info(profile);
    if(accountMap[ID][1] != info.fileName())
    {
        QString destPath = "./account/profile/" + info.fileName();
        QFile::remove("./account/profile/" + accountMap[ID][1]);
        QFile::copy(profile, destPath);
    }
    accountMap[ID][1] = info.fileName();
    accountMap[ID][0] = name;
    accountMap[ID][2] = pass;
    StaticMainMode->imageFreish();
    reNewWriteAccount();
}

void zgnep_account_general::reNewWriteAccount()
{
    QString path = "./account/zgnep_account.zgn";
    QFile file(path);
    file.open(QIODevice::ReadWrite | QIODevice::Truncate);
    QTextStream out(&file);
    for(auto iter = accountMap.begin(); iter != accountMap.end(); iter++)
    {
        QString s;
        s.push_back('[');
        s.push_back(iter.key());
        s.push_back('|');
        for(auto x : iter.value())
        {
            s.push_back(x);
            s.push_back('|');
        }
        s = s.mid(0, s.size() - 1);
        s.push_back(']');
        out << s << "\n";
    }
}

int zgnep_account_general::verifyAccount(QString ID, QString pass)
{
    if(!accountMap.count(ID)) return  -1;
    if(accountMap[ID][2] != pass) return  -1;
    return  1;
}

QString zgnep_account_general::ShowDataBase()
{
    QString result;
    QMapIterator<QString, QVector<QString>> it(accountMap);
    while (it.hasNext()) {
        it.next();
        QString key = it.key();
        QVector<QString> values = it.value();
        for (const QString &value : values) {
            result += key + ": " + value + "\n"; // 使用 ": " 分隔键和值，每个键值对之后添加换行符
        }
    }
    return result;
}

QStringList zgnep_account_general::existUser()
{
    QStringList ans;
    for(auto iter = accountMap.begin(); iter != accountMap.end(); iter++)
    {
        ans.push_back(zgnep_account_general::readAccountName(iter.key()));
    }
    return  ans;
}

QString zgnep_account_general::getNewID()
{
    QString pattern = "ZGNEP_ID_";
    int val = 0;
    QString ID = QString::number(val).rightJustified(6, '0');
    while(accountMap.count(pattern + ID))
    {
        val++;
        ID = QString::number(val).rightJustified(6, '0');
    }
    return  pattern + ID;
}

bool zgnep_account_general::CheckNameISunique(QString Name)
{
    QStringList list = existUser();
    return  list.contains(Name);
}

void zgnep_account_general::insertModel(QString ID, QString Name, QString Image, QString pass, QString Role, QString authority)
{
    accountMap[ID].push_back(Name);
    accountMap[ID].push_back(Image);
    accountMap[ID].push_back(pass);
    accountMap[ID].push_back(Role);
    accountMap[ID].push_back(authority);
}
