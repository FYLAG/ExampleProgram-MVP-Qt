#ifndef FORM_H
#define FORM_H

#include "iview.h"

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Form; }
QT_END_NAMESPACE

class Form : public QMainWindow, public IView {

    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

    /*! Method for setting the length of a rectangle */
    void setLength(double);
    /*! Method for getting the length of a rectangle */
    double getLength();
    /*! Method for setting the width of a rectangle */
    void setWidth(double);
    /*! Method for getting the width of a rectangle */
    double getWidth();
    /*! Method for setting the square of a rectangle */
    void setSquare(double);

private:
    /*! A variable pointing to the created form and the widgets placed in it */
    Ui::Form *ui;

signals:
    /*! Signal to call a specific slot */
    void signalCalcSquare();

private slots:
    /*! The method is triggered when a button on the form is clicked */
    void on_pushButton_calc_clicked();

};

#endif // FORM_H
