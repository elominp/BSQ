//
// main.cpp for bsq in /
// 
// Made by guigui
// Login   <guigui@epitech.net>
// 
// Started on  Sun Jan 18 22:32:25 2015 guigui
// Last update Sun Jan 18 22:32:29 2015 guigui
//

#include "qmapgenerator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMapGenerator w;
    w.show();

    return a.exec();
}
