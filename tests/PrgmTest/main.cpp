//
// main.cpp for bsq in /
// 
// Made by guigui
// Login   <guigui@epitech.net>
// 
// Started on  Sun Jan 18 22:34:45 2015 guigui
// Last update Sun Jan 18 22:34:46 2015 guigui
//

#include "testwdgt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestWdgt w;
    w.show();

    return a.exec();
}
