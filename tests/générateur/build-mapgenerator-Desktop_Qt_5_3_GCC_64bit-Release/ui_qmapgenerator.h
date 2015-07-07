/********************************************************************************
** Form generated from reading UI file 'qmapgenerator.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMAPGENERATOR_H
#define UI_QMAPGENERATOR_H

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

class Ui_QMapGenerator
{
public:
    QGridLayout *gridLayout;
    QPushButton *path;
    QSpinBox *density;
    QLabel *label_2;
    QSpinBox *columns;
    QSpinBox *rows;
    QLabel *label_3;
    QLabel *label;
    QPushButton *create;

    void setupUi(QWidget *QMapGenerator)
    {
        if (QMapGenerator->objectName().isEmpty())
            QMapGenerator->setObjectName(QStringLiteral("QMapGenerator"));
        QMapGenerator->resize(400, 134);
        gridLayout = new QGridLayout(QMapGenerator);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        path = new QPushButton(QMapGenerator);
        path->setObjectName(QStringLiteral("path"));

        gridLayout->addWidget(path, 3, 0, 1, 3);

        density = new QSpinBox(QMapGenerator);
        density->setObjectName(QStringLiteral("density"));
        density->setMaximum(2147483647);

        gridLayout->addWidget(density, 1, 2, 1, 1);

        label_2 = new QLabel(QMapGenerator);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        columns = new QSpinBox(QMapGenerator);
        columns->setObjectName(QStringLiteral("columns"));
        columns->setMinimum(1);
        columns->setMaximum(2147483647);

        gridLayout->addWidget(columns, 1, 1, 1, 1);

        rows = new QSpinBox(QMapGenerator);
        rows->setObjectName(QStringLiteral("rows"));
        rows->setMinimum(1);
        rows->setMaximum(2147483647);

        gridLayout->addWidget(rows, 1, 0, 1, 1);

        label_3 = new QLabel(QMapGenerator);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(QMapGenerator);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        create = new QPushButton(QMapGenerator);
        create->setObjectName(QStringLiteral("create"));

        gridLayout->addWidget(create, 4, 0, 1, 3);


        retranslateUi(QMapGenerator);

        QMetaObject::connectSlotsByName(QMapGenerator);
    } // setupUi

    void retranslateUi(QWidget *QMapGenerator)
    {
        QMapGenerator->setWindowTitle(QApplication::translate("QMapGenerator", "MapGenerator", 0));
        path->setText(QApplication::translate("QMapGenerator", "Choose path", 0));
        label_2->setText(QApplication::translate("QMapGenerator", "Number of columns :", 0));
        label_3->setText(QApplication::translate("QMapGenerator", "Density :", 0));
        label->setText(QApplication::translate("QMapGenerator", "Number of rows :", 0));
        create->setText(QApplication::translate("QMapGenerator", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class QMapGenerator: public Ui_QMapGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMAPGENERATOR_H
