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

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    QString a = arg1;
    QString b = "Введите имя";

    if (!a.isEmpty()) {
        b = "Привет из Qt, " + a + "!";
    } else {
        b = "Введите имя";
    }

    ui->lbl_result->setText(b);
}

