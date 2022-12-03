#include "backend.h"
#include <QQuickView>
#include <QQmlEngine>
#include <QQmlContext>
#include <QtQml>

BackEnd::BackEnd(QObject *parent) :QObject(parent)
{

}

int BackEnd::changeValue()
{
    static int i = 0;
    i++;
//    if(a==1)
//    {
//        valurChanged("value is 1 ,From C++");
//    }
//    else if(a == 2)
//        valurChanged("value is 2 ,From C++");
//    else
//        valurChanged("!!!");
    if(i==1)
    {
        valueChanged("value is 1 ,From C++");
        return i;
    }
    else if(i == 2)
    {
        valueChanged("value is 2 ,From C++");
        return i;
    }
    else if(i == 3)
    {
        valueChanged("value is 3 ,From C++");
        return i;
    }
    else if(i == 4)
    {
        valueChanged("value is 4 ,From C++");
        return i;
    }
    else if(i == 5)
    {
        valueChanged("value is 5 ,From C++");
    }
    else if(i == 6)
    {
        valueChanged("value is 6 ,From C++");
        return i;
    }
    else
    {
        valueChanged("!!!");
        return i;
    }

}

void BackEnd::light_switch01(bool checked)
{
    if(checked == true)
        qDebug()<<"on";
}


