#include "form.h"
#include "presenter.h"

#include <QApplication>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Form *view = new Form();
    Presenter presenter = Presenter(view);

    Q_UNUSED(presenter);

    view->show();

    return app.exec();

}
