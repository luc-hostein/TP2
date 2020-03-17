//
// Created by Marcel on 18/02/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "SQLClientWindow.h"
#include <QHeaderView>

SQLClientWindow::SQLClientWindow() {
    //titre
    setWindowTitle("SQLClient");
//     taille
    this->setMinimumSize(600, 400);
//    widget parent
    QWidget *parent = new QWidget(this);
//   placement
    QVBoxLayout *verticalLayout = new QVBoxLayout();



//   creation et ajout buttonpanel dans le layout principal
    buttonPanel = new ButtonPanel();
    verticalLayout->addWidget(buttonPanel);
//association du layout au widget


    notificationPanel = new QTextEdit(parent);
    verticalLayout->addWidget(notificationPanel);

    resultTable = new QTableWidget(5,3,parent);
    resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    verticalLayout->addWidget(resultTable);



    parent->setLayout(verticalLayout);
    setCentralWidget(parent);
}
