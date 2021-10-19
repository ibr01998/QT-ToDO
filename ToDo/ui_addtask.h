/********************************************************************************
** Form generated from reading UI file 'addtask.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK_H
#define UI_ADDTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddTask
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDial *dial;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *AddTask)
    {
        if (AddTask->objectName().isEmpty())
            AddTask->setObjectName(QString::fromUtf8("AddTask"));
        AddTask->resize(234, 278);
        verticalLayout = new QVBoxLayout(AddTask);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(AddTask);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(AddTask);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(AddTask);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dial = new QDial(AddTask);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMinimum(1);
        dial->setMaximum(60);

        horizontalLayout_2->addWidget(dial);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(AddTask);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label = new QLabel(AddTask);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(AddTask);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(AddTask);

        QMetaObject::connectSlotsByName(AddTask);
    } // setupUi

    void retranslateUi(QDialog *AddTask)
    {
        AddTask->setWindowTitle(QCoreApplication::translate("AddTask", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("AddTask", "Task:", nullptr));
        label_2->setText(QCoreApplication::translate("AddTask", "setTime:", nullptr));
        label_4->setText(QCoreApplication::translate("AddTask", "Minutes:", nullptr));
        label->setText(QCoreApplication::translate("AddTask", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("AddTask", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTask: public Ui_AddTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK_H
