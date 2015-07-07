/*
** qcrazygenerator.h for bsq in /
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sun Jan 18 22:34:19 2015 guigui
** Last update Sun Jan 18 22:34:22 2015 guigui
*/

#ifndef QCRAZYGENERATOR_H
#define QCRAZYGENERATOR_H

#include <QWidget>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QTime>
#include <iostream>
#include "crazymapgenerator.h"

namespace Ui {
class QCrazyGenerator;
}

class QCrazyGenerator : public QWidget
{
    Q_OBJECT

public:
    explicit QCrazyGenerator(QWidget *parent = 0);
    ~QCrazyGenerator();

private:
    Ui::QCrazyGenerator *ui;
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

#endif // QCRAZYGENERATOR_H
