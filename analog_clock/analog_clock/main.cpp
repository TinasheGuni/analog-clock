#include <QApplication>
#include "analogclock.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    AnalogClock app;
    app.show();

    return a.exec();
}
