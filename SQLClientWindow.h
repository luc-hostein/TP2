//
// Created by Marcel on 18/02/2020.
//

#ifndef TP2_SQLCLIENTWINDOW_H
#define TP2_SQLCLIENTWINDOW_H


#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTableWidget>
#include "ButtonPanel.h"

class SQLClientWindow : public QMainWindow {
private:
    ButtonPanel* buttonPanel;
    QTextEdit* notificationPanel;
    QTableWidget* resultTable;
public:
    SQLClientWindow();
};


#endif //TP2_SQLCLIENTWINDOW_H
