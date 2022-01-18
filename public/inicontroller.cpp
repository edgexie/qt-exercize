#include "inicontroller.h"



IniController::IniController(string path, string fileName)
{

    file.open(path+fileName, ios::out | ios::in);
    cout<<path+fileName<<endl;
}

string IniController::getInfo()
{
    string line;
    string content;
    while (getline(file, line)) {
        content+=line;
    }
    return content;
}

IniController:: ~IniController(){
    file.close();
}
//QString IniController::getValue(QString section, QString key)
//{

//}



