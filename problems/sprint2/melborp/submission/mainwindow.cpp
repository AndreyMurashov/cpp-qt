#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

QString MainWindow::Melborp(const QString& input){
    result="";
    for (QChar symbol : input) {
        //QChar a = input[var];
        result = symbol + result;
    }
    return result;
}

void MainWindow::on_pushButton_clicked()
{
    QString input = ui->lineEdit->text();
    QString res = Melborp(input);
    //ui->lineEdit->setText("");
    ui->lineEdit->setText(res);
    }



