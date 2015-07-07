/*
** qmapgenerator.h for bsq in /
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sun Jan 18 22:33:16 2015 guigui
** Last update Sun Jan 18 22:33:18 2015 guigui
*/

#ifndef QMAPGENERATOR_H
#define QMAPGENERATOR_H

#include <QWidget>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QTime>
#include <iostream>
#include "mapgenerator.h"

namespace Ui {
class QMapGenerator;
}

class QMapGenerator : public QWidget
{
    Q_OBJECT

public:
    explicit QMapGenerator(QWidget *parent = 0);
    ~QMapGenerator();

private:
    Ui::QMapGenerator *ui;
    int rows;
    int columns;
    int density;
    QString path;

private slots:
    void setrows(int n);
    void setcolumns(int n);
    void setdensity(int n);
    void setpath();
    void create();
};

#endif // QMAPGENERATOR_H
