#include "calculator.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
calculator calc;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    calc.reset();
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_but_0_clicked()
{
    calc.digit(0);
    ui->showing_browser->setText(calc.show_face());
}
void MainWindow::on_but_1_clicked()
{
    calc.digit(1);
    ui->showing_browser->setText(calc.show_face());
}
void MainWindow::on_but_2_clicked()
{
    calc.digit(2);
    ui->showing_browser->setText(calc.show_face());
}
void MainWindow::on_but_3_clicked()
{
    calc.digit(3);

    ui->showing_browser->setText(calc.show_face());
}
void MainWindow::on_but_4_clicked()
{
    calc.digit(4);

    ui->showing_browser->setText(calc.show_face());
}
void MainWindow::on_but_5_clicked()
{
    calc.digit(5);

    ui->showing_browser->setText(calc.show_face());
}
void MainWindow::on_but_6_clicked()
{
    calc.digit(6);

    ui->showing_browser->setText(calc.show_face());
}
void MainWindow::on_but_7_clicked()
{
    calc.digit(7);

    ui->showing_browser->setText(calc.show_face());
}
void MainWindow::on_but_8_clicked()
{
    calc.digit(8);

    ui->showing_browser->setText(calc.show_face());
}
void MainWindow::on_but_9_clicked()
{
    calc.digit(9);

    ui->showing_browser->setText(calc.show_face());

}

void MainWindow::on_but_c_clicked()
{
    calc.reset();
    ui->textBrowser->setText(calc.india());
    ui->showing_browser->setText(calc.show_face());
}


void MainWindow::on_but_p_clicked()
{
    calc.operation(1);
    calc.general_face += "+";
    ui->showing_browser->setText(calc.show_face());
}


void MainWindow::on_but_m_clicked()
{
    calc.operation(2);
    calc.general_face += "-";
    ui->showing_browser->setText(calc.show_face());
}


void MainWindow::on_but_mp_clicked()
{
    calc.operation(3);
    calc.general_face += "*";
    ui->showing_browser->setText(calc.show_face());
}


void MainWindow::on_but_div_clicked()
{
    calc.operation(4);
    calc.general_face += "/";
    ui->showing_browser->setText(calc.show_face());

}


void MainWindow::on_but_e_clicked()
{
    calc.calculate();
    ui->textBrowser->setText(calc.india());
    calc.general_face += "=";
    ui->showing_browser->setText(calc.show_face());
}


void MainWindow::on_division_by_1_clicked()
{
    calc.div();
    ui->textBrowser->setText(calc.india());
}


void MainWindow::on_square_clicked()
{
    calc.sq();
    ui->textBrowser->setText(calc.india());
}


void MainWindow::on_radical_clicked()
{
    calc.roo();
    ui->textBrowser->setText(calc.india());

}



