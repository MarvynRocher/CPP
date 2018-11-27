/********************************************************************************
** Form generated from reading UI file 'testalveoleslibres.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTALVEOLESLIBRES_H
#define UI_TESTALVEOLESLIBRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestAlveolesLibres
{
public:
    QListWidget *listWidgetAlveolesLibres;
    QPushButton *pushButtonReserver;
    QPushButton *pushButtonLiberer;
    QListWidget *listWidgetAlveolesOccuppees;
    QPushButton *pushButtonQuitter;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *TestAlveolesLibres)
    {
        if (TestAlveolesLibres->objectName().isEmpty())
            TestAlveolesLibres->setObjectName(QStringLiteral("TestAlveolesLibres"));
        TestAlveolesLibres->resize(546, 383);
        listWidgetAlveolesLibres = new QListWidget(TestAlveolesLibres);
        listWidgetAlveolesLibres->setObjectName(QStringLiteral("listWidgetAlveolesLibres"));
        listWidgetAlveolesLibres->setGeometry(QRect(30, 30, 181, 261));
        pushButtonReserver = new QPushButton(TestAlveolesLibres);
        pushButtonReserver->setObjectName(QStringLiteral("pushButtonReserver"));
        pushButtonReserver->setGeometry(QRect(230, 130, 80, 25));
        pushButtonLiberer = new QPushButton(TestAlveolesLibres);
        pushButtonLiberer->setObjectName(QStringLiteral("pushButtonLiberer"));
        pushButtonLiberer->setGeometry(QRect(230, 180, 80, 25));
        listWidgetAlveolesOccuppees = new QListWidget(TestAlveolesLibres);
        listWidgetAlveolesOccuppees->setObjectName(QStringLiteral("listWidgetAlveolesOccuppees"));
        listWidgetAlveolesOccuppees->setGeometry(QRect(330, 30, 181, 261));
        pushButtonQuitter = new QPushButton(TestAlveolesLibres);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(230, 330, 80, 25));
        label = new QLabel(TestAlveolesLibres);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 151, 17));
        label_2 = new QLabel(TestAlveolesLibres);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 0, 181, 17));

        retranslateUi(TestAlveolesLibres);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), TestAlveolesLibres, SLOT(close()));

        QMetaObject::connectSlotsByName(TestAlveolesLibres);
    } // setupUi

    void retranslateUi(QWidget *TestAlveolesLibres)
    {
        TestAlveolesLibres->setWindowTitle(QApplication::translate("TestAlveolesLibres", "TestAlveolesLibres", nullptr));
        pushButtonReserver->setText(QApplication::translate("TestAlveolesLibres", "R\303\251server >>", nullptr));
        pushButtonLiberer->setText(QApplication::translate("TestAlveolesLibres", "<<  Lib\303\251rer", nullptr));
        pushButtonQuitter->setText(QApplication::translate("TestAlveolesLibres", "Quitter", nullptr));
        label->setText(QApplication::translate("TestAlveolesLibres", "Num\303\251ro d'alv\303\251oles libres", nullptr));
        label_2->setText(QApplication::translate("TestAlveolesLibres", "Rang\303\251es et colonnes occup\303\251es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAlveolesLibres: public Ui_TestAlveolesLibres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTALVEOLESLIBRES_H
