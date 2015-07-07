//
// main.cpp for bsq in /
// 
// Made by guigui
// Login   <guigui@epitech.net>
// 
// Started on  Sun Jan 18 22:34:01 2015 guigui
// Last update Sun Jan 18 22:34:03 2015 guigui
//

#include "qcrazygenerator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCrazyGenerator w;
    w.show();

    return a.exec();
}
