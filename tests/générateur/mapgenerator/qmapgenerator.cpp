//
// qmapgenerator.cpp for bsq in /
// 
// Made by guigui
// Login   <guigui@epitech.net>
// 
// Started on  Sun Jan 18 22:33:03 2015 guigui
// Last update Sun Jan 18 22:33:10 2015 guigui
//

#include "qmapgenerator.h"
#include "ui_qmapgenerator.h"

using namespace std;

QMapGenerator::QMapGenerator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QMapGenerator)
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

void QMapGenerator::setrows(int n) {
    if (n > 0)
        rows = n;
}

void QMapGenerator::setcolumns(int n) {
    if (n > 0)
        columns = n;
}

void QMapGenerator::setdensity(int n) {
    if (n >= 0)
        density = n;
}

void QMapGenerator::setpath() {
    path = QFileDialog::getSaveFileName(this, "Choose a path");
}

void QMapGenerator::create() {
    QTime timer;
    mapgenerator gen(rows, columns, density, path.toStdString());

    timer.start();
    if (gen.create()) {
        cout << timer.elapsed() << endl;
        QMessageBox::information(this, "Status", "Congratulations, the map was created");
    }
    else
        QMessageBox::critical(this, "Error", "An error as occured during the generating process");
}

QMapGenerator::~QMapGenerator()
{
    delete ui;
}
