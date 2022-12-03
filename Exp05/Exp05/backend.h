#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QString>
#include <QTimer>
#include <QThread>
class BackEnd :public QObject
{
    Q_OBJECT
public:
    explicit BackEnd(QObject *parent = nullptr);
signals:
    void valueChanged(QString s);
public slots:
    int changeValue();
    void light_switch01(bool checked);



};

#endif // BACKEND_H
