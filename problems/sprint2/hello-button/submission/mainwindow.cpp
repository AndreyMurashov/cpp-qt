#include "mainwindow.h"
#include <string>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString a = ui->lineEdit->text();
    auto ddd = "Привет из Qt, " + a + "!";
    //auto ddd << ui->lineEdit->text().toStdString();
    ui->lbl_result->setText(ddd);
    //ui->lineEdit->text()
}

