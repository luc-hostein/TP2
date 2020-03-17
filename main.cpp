#include <iostream>
#include <QApplication>
#include "SQLClientWindow.h"
#include "ConfigurationDialog.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);
//    ConfigurationDialog cd;
    SQLClientWindow sql;
    sql.show();
//    cd.show();
    return app.exec();
}
