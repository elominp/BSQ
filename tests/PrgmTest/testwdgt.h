/*
** testwdgt.h for bsq in /
** 
** Made by guigui
** Login   <guigui@epitech.net>
** 
** Started on  Sun Jan 18 22:35:02 2015 guigui
** Last update Sun Jan 18 22:35:03 2015 guigui
*/

#ifndef TESTWDGT_H
#define TESTWDGT_H

#include <QWidget>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>

namespace Ui {
class TestWdgt;
}

class TestWdgt : public QWidget
{
    Q_OBJECT

public:
    explicit TestWdgt(QWidget *parent = 0);
    ~TestWdgt();

private:
    Ui::TestWdgt *ui;
    QString app_path;
    QString in_path;
    QString out_path;
    std::ifstream in_file;
    std::ifstream out_file;

    bool check_app();
    bool check_in();
    bool check_out();
    bool check();

private slots:
    void click_app();
    void click_in();
    void click_out();

public slots:
    void click_run();
};

#endif // TESTWDGT_H
