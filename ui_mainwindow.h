/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *startButton;
    QPushButton *lapTimeButton;
    QPushButton *resetButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 260);
        MainWindow->setMinimumSize(QSize(400, 260));
        MainWindow->setMaximumSize(QSize(400, 260));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(54, 57, 63)\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 380, 60));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(10, 80, 110, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS PGothic"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        startButton->setFont(font1);
        startButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(49, 49, 49);\n"
"	color: rgb(255, 255, 255);\n"
"	border-top-right-radius: 4px;\n"
"	border-top-left-radius: 4px;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
"	border: 1px solid black;\n"
"}\n"
":hover{\n"
"	background-color:rgb(54, 54, 54);\n"
"}\n"
"\n"
":pressed{\n"
"	background-color:rgb(59, 59, 59);\n"
"	border-left: 3px solid black;\n"
"	border-top: 3px solid black;\n"
"}"));
        lapTimeButton = new QPushButton(centralwidget);
        lapTimeButton->setObjectName(QString::fromUtf8("lapTimeButton"));
        lapTimeButton->setGeometry(QRect(145, 80, 110, 60));
        lapTimeButton->setFont(font1);
        lapTimeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(49, 49, 49);\n"
"	color: rgb(255, 255, 255);\n"
"	border-top-right-radius: 4px;\n"
"	border-top-left-radius: 4px;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
"	border: 1px solid black;\n"
"}\n"
":hover{\n"
"	background-color:rgb(54, 54, 54);\n"
"}\n"
"\n"
":pressed{\n"
"	background-color:rgb(59, 59, 59);\n"
"	border-left: 3px solid black;\n"
"	border-top: 3px solid black;\n"
"}"));
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(280, 80, 110, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Gothic"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        resetButton->setFont(font2);
        resetButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(49, 49, 49);\n"
"	color: rgb(255, 255, 255);\n"
"	border-top-right-radius: 4px;\n"
"	border-top-left-radius: 4px;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
"	border: 1px solid black;\n"
"}\n"
":hover{\n"
"	background-color:rgb(54, 54, 54);\n"
"}\n"
"\n"
":pressed{\n"
"	background-color:rgb(59, 59, 59);\n"
"	border-left: 3px solid black;\n"
"	border-top: 3px solid black;\n"
"}"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 150, 380, 95));
        QFont font3;
        font3.setPointSize(12);
        textEdit->setFont(font3);
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	background-color: rgb(60, 60, 60);\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid black;\n"
"	border-top-right-radius: 4px;\n"
"	border-top-left-radius: 4px;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
"}"));
        textEdit->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Stopwatch", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "00:00:00.000", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        lapTimeButton->setText(QCoreApplication::translate("MainWindow", "lap time", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
