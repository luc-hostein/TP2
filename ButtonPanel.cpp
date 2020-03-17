//
// Created by Marcel on 18/02/2020.
//

#include <QtWidgets/QHBoxLayout>
#include "ButtonPanel.h"

ButtonPanel::ButtonPanel() {
    button1 = new QPushButton("Configuration");
    button2 = new QPushButton("Connect");
    button3 = new QPushButton("Disconnect");


    QHBoxLayout* hLayout = new QHBoxLayout(this);
    hLayout->addWidget(button1);
    hLayout->addWidget(button2);
    hLayout->addWidget(button3);

}
