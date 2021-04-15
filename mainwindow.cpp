#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    time = 0;

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimerTimeout()));
    ui -> label -> setText(QDateTime::fromMSecsSinceEpoch(time, Qt::UTC).toString("hh:mm:ss.zzz"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_startButton_clicked()
{
    if(ui -> startButton -> text() == "start")
        {
            qDebug() << "start";
            timer -> start(1);
            ui -> startButton -> setText("pauza");
        }
    else
        {
            qDebug() << "stop";
            timer -> stop();
            ui -> startButton -> setText("start");
        }
}
void MainWindow::on_resetButton_clicked()
{
    ui->textEdit->clear();
    ui->label->setText("00:00:00.000");
    qDebug()<<"Reset";
}

void MainWindow::onTimerTimeout()
{
    time++;
    ui -> label -> setText(QDateTime::fromMSecsSinceEpoch(time, Qt::UTC).toString("hh:mm:ss.zzz"));
}

void MainWindow::on_lapTimeButton_clicked()
{
    const QString tekst = ui->label->text();
    ui->textEdit->setText(tekst);
    qDebug()<<"Zapis";
}
