#include "presenter.h"

Presenter::Presenter(IView *view, QObject *parent)
    : QObject(parent), view(view), model(new Model(0, 0)) {

    QObject *viewObject = dynamic_cast<QObject*>(this->view);
    QObject::connect(viewObject, SIGNAL(signalCalcSquare()), this, SLOT(countingData()));

}

void Presenter::refreshView() const {

    this->view->setSquare(this->model->calcSquare());

}

void Presenter::countingData() {

    this->model->setLength(this->view->getLength());
    this->model->setWidth(this->view->getWidth());

    this->refreshView();

}
