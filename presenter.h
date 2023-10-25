#ifndef PRESENTER_H
#define PRESENTER_H

#include "iview.h"
#include "model.h"

#include <QObject>

class Presenter : public QObject {

    Q_OBJECT

public:
    explicit Presenter(IView*, QObject *parent = nullptr);

private:

    IView *view;    /*!< */
    Model *model;   /*!< */
    /*! Method for updating data contained on a form */
    void refreshView() const;

private slots:
    /*! Method of collecting data and its further processing from the form */
    void countingData();

};

#endif // PRESENTER_H
