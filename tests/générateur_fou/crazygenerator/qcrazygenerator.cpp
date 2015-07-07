//
// qcrazygenerator.cpp for bsq in /
// 
// Made by guigui
// Login   <guigui@epitech.net>
// 
// Started on  Sun Jan 18 22:34:10 2015 guigui
// Last update Sun Jan 18 22:34:11 2015 guigui
//

#include "qcrazygenerator.h"
#include "ui_qcrazygenerator.h"

using namespace std;

QCrazyGenerator::QCrazyGenerator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QCrazyGenerator)
{
    ui->setupUi(this);

    rows = 0;
    columns = 0;
    density = 0;

    QObject::connect(ui->rows, SIGNAL(valueChanged(int)), this, SLOT(setrows(int)));
    QObject::connect(ui->columns, SIGNAL(valueChanged(int)), this, SLOT(setcolumns(int)));
    QObject::connect(ui->density, SIGNAL(valueChanged(int)), this, SLOT(setdensity(int)));
    QObject::connect(ui->path, SIGNAL(clicked()), this, SLOT(setpath()));
    QObject::connect(ui->create, SIGNAL(clicked()), this, SLOT(create()));
}

void QCrazyGenerator::setrows(int n) {
    if (n > 0)
        rows = n;
}

void QCrazyGenerator::setcolumns(int n) {
    if (n > 0)
        columns = n;
}

void QCrazyGenerator::setdensity(int n) {
    if (n >= 0)
        density = n;
}

void QCrazyGenerator::setpath() {
    path = QFileDialog::getSaveFileName(this, "Choose a path");
}

void QCrazyGenerator::create() {
    QTime timer;
    crazymapgenerator gen(rows, columns, density, path.toStdString());

    timer.start();
    if (gen.create()) {
        cout << timer.elapsed() << endl;
        QMessageBox::information(this, "Status", "Congratulations, the map was created");
    }
    else
        QMessageBox::critical(this, "Error", "An error as occured during the generating process");
}

QCrazyGenerator::~QCrazyGenerator()
{
    delete ui;
}
