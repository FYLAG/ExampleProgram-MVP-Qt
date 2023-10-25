#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Form) {

    ui->setupUi(this);

}

Form::~Form() {
    delete ui;
}

void Form::setLength(double length) {

    QString lengthStr = QString::number(length);

    ui->lineEdit_length->setText(lengthStr);

}

double Form::getLength() {

    double length = ui->lineEdit_length->text().toDouble();

    return length;

}

void Form::setWidth(double width) {

    QString widthStr = QString::number(width);

    ui->lineEdit_width->setText(widthStr);

}

double Form::getWidth() {

    double width = ui->lineEdit_width->text().toDouble();

    return width;

}

void Form::setSquare(double square) {

    QString squareStr = QString::number(square);

    ui->lineEdit_square->setText(squareStr);

}

void Form::on_pushButton_calc_clicked() {
    emit signalCalcSquare();
}

