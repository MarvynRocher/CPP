/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QListWidget *listWidgetRouleauxEnStock;
    QListWidget *listWidgetRouleauxRetenus;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonNouveau;
    QPushButton *pushButtonRetrait;
    QPushButton *pushButtonSuppression;
    QPushButton *pushButtonQuitter;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelDiametre;
    QLabel *labelReference;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *labelRouleauxEnStock;
    QLabel *labelRouleauxRetenus;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(586, 425);
        listWidgetRouleauxEnStock = new QListWidget(Widget);
        listWidgetRouleauxEnStock->setObjectName(QStringLiteral("listWidgetRouleauxEnStock"));
        listWidgetRouleauxEnStock->setGeometry(QRect(200, 70, 131, 291));
        listWidgetRouleauxRetenus = new QListWidget(Widget);
        listWidgetRouleauxRetenus->setObjectName(QStringLiteral("listWidgetRouleauxRetenus"));
        listWidgetRouleauxRetenus->setGeometry(QRect(370, 70, 131, 291));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 130, 171, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonNouveau = new QPushButton(layoutWidget);
        pushButtonNouveau->setObjectName(QStringLiteral("pushButtonNouveau"));

        verticalLayout->addWidget(pushButtonNouveau);

        pushButtonRetrait = new QPushButton(layoutWidget);
        pushButtonRetrait->setObjectName(QStringLiteral("pushButtonRetrait"));

        verticalLayout->addWidget(pushButtonRetrait);

        pushButtonSuppression = new QPushButton(layoutWidget);
        pushButtonSuppression->setObjectName(QStringLiteral("pushButtonSuppression"));

        verticalLayout->addWidget(pushButtonSuppression);

        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        verticalLayout->addWidget(pushButtonQuitter);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 50, 59, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelDiametre = new QLabel(layoutWidget1);
        labelDiametre->setObjectName(QStringLiteral("labelDiametre"));

        verticalLayout_2->addWidget(labelDiametre);

        labelReference = new QLabel(layoutWidget1);
        labelReference->setObjectName(QStringLiteral("labelReference"));

        verticalLayout_2->addWidget(labelReference);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(80, 50, 110, 81));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_3->addWidget(lineEdit_2);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(200, 50, 341, 20));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelRouleauxEnStock = new QLabel(layoutWidget3);
        labelRouleauxEnStock->setObjectName(QStringLiteral("labelRouleauxEnStock"));

        horizontalLayout->addWidget(labelRouleauxEnStock);

        labelRouleauxRetenus = new QLabel(layoutWidget3);
        labelRouleauxRetenus->setObjectName(QStringLiteral("labelRouleauxRetenus"));

        horizontalLayout->addWidget(labelRouleauxRetenus);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonNouveau->setText(QApplication::translate("Widget", "Nouveau", nullptr));
        pushButtonRetrait->setText(QApplication::translate("Widget", "Retrait", nullptr));
        pushButtonSuppression->setText(QApplication::translate("Widget", "Suppression", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
        labelDiametre->setText(QApplication::translate("Widget", "Diam\303\250tre", nullptr));
        labelReference->setText(QApplication::translate("Widget", "R\303\251f\303\251rence", nullptr));
        labelRouleauxEnStock->setText(QApplication::translate("Widget", "Rouleaux en stock", nullptr));
        labelRouleauxRetenus->setText(QApplication::translate("Widget", "Rouleaux retenus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
