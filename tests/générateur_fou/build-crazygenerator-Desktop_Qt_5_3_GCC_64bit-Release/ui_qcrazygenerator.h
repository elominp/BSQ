/********************************************************************************
** Form generated from reading UI file 'qcrazygenerator.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCRAZYGENERATOR_H
#define UI_QCRAZYGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QCrazyGenerator
{
public:
    QGridLayout *gridLayout;
    QSpinBox *density;
    QLabel *label_2;
    QSpinBox *rows;
    QLabel *label;
    QPushButton *path;
    QLabel *label_3;
    QSpinBox *columns;
    QPushButton *create;

    void setupUi(QWidget *QCrazyGenerator)
    {
        if (QCrazyGenerator->objectName().isEmpty())
            QCrazyGenerator->setObjectName(QStringLiteral("QCrazyGenerator"));
        QCrazyGenerator->resize(400, 134);
        gridLayout = new QGridLayout(QCrazyGenerator);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        density = new QSpinBox(QCrazyGenerator);
        density->setObjectName(QStringLiteral("density"));
        density->setMaximum(2147483647);

        gridLayout->addWidget(density, 1, 2, 1, 1);

        label_2 = new QLabel(QCrazyGenerator);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        rows = new QSpinBox(QCrazyGenerator);
        rows->setObjectName(QStringLiteral("rows"));
        rows->setMinimum(1);
        rows->setMaximum(2147483647);

        gridLayout->addWidget(rows, 1, 0, 1, 1);

        label = new QLabel(QCrazyGenerator);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        path = new QPushButton(QCrazyGenerator);
        path->setObjectName(QStringLiteral("path"));

        gridLayout->addWidget(path, 2, 0, 1, 3);

        label_3 = new QLabel(QCrazyGenerator);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        columns = new QSpinBox(QCrazyGenerator);
        columns->setObjectName(QStringLiteral("columns"));
        columns->setMinimum(1);
        columns->setMaximum(2147483647);

        gridLayout->addWidget(columns, 1, 1, 1, 1);

        create = new QPushButton(QCrazyGenerator);
        create->setObjectName(QStringLiteral("create"));

        gridLayout->addWidget(create, 3, 0, 1, 3);


        retranslateUi(QCrazyGenerator);

        QMetaObject::connectSlotsByName(QCrazyGenerator);
    } // setupUi

    void retranslateUi(QWidget *QCrazyGenerator)
    {
        QCrazyGenerator->setWindowTitle(QApplication::translate("QCrazyGenerator", "CrazyGenerator", 0));
        label_2->setText(QApplication::translate("QCrazyGenerator", "Number of columns :", 0));
        label->setText(QApplication::translate("QCrazyGenerator", "Number of rows :", 0));
        path->setText(QApplication::translate("QCrazyGenerator", "Choose path", 0));
        label_3->setText(QApplication::translate("QCrazyGenerator", "Density :", 0));
        create->setText(QApplication::translate("QCrazyGenerator", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class QCrazyGenerator: public Ui_QCrazyGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCRAZYGENERATOR_H
