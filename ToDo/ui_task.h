/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task
{
public:
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *timer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *startbtn;
    QPushButton *resetbtn;
    QPushButton *pushButton;

    void setupUi(QWidget *task)
    {
        if (task->objectName().isEmpty())
            task->setObjectName(QString::fromUtf8("task"));
        task->resize(345, 28);
        horizontalLayout = new QHBoxLayout(task);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox = new QCheckBox(task);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(task);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        timer = new QLabel(task);
        timer->setObjectName(QString::fromUtf8("timer"));

        horizontalLayout->addWidget(timer);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        startbtn = new QPushButton(task);
        startbtn->setObjectName(QString::fromUtf8("startbtn"));

        horizontalLayout->addWidget(startbtn);

        resetbtn = new QPushButton(task);
        resetbtn->setObjectName(QString::fromUtf8("resetbtn"));

        horizontalLayout->addWidget(resetbtn);

        pushButton = new QPushButton(task);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(task);

        QMetaObject::connectSlotsByName(task);
    } // setupUi

    void retranslateUi(QWidget *task)
    {
        task->setWindowTitle(QCoreApplication::translate("task", "Form", nullptr));
        checkBox->setText(QString());
        label->setText(QCoreApplication::translate("task", "TextLabel", nullptr));
        timer->setText(QString());
        startbtn->setText(QCoreApplication::translate("task", "Start", nullptr));
        resetbtn->setText(QCoreApplication::translate("task", "Reset", nullptr));
        pushButton->setText(QCoreApplication::translate("task", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task: public Ui_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
