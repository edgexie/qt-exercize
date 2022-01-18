#ifndef INICONTROLLER_H
#define INICONTROLLER_H
#include <QDebug>
#include <QDir>
#include <iostream>
#include <fstream>
#include <direct.h>
using namespace std;

struct Option {
    string value;
    string label;
};
class IniController
{
public:
    IniController(string path, string fileName);
    // 获取
    string getValue(string section, string key);
    string getValue(string section, Option options[]);

    // 设置
    string setValue(string section, string key, string value);
    string setValue(string section, Option options[]);

    // 更新
    bool updateValue(string section, string key, string value);
    bool updateValue(string section, Option options[]);

    // 删除
    bool deleteValue(string section, string key);
    bool deleteValue(string section, Option options[]);

    // 返回配置文件的所有信息
    string getInfo();
    ~IniController();
private:
    fstream file;
};

#endif // INICONTROLLER_H
