//
// Created by Marcel on 18/02/2020.
//

#ifndef TP2_BUTTONPANEL_H
#define TP2_BUTTONPANEL_H


#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>

class ButtonPanel : public QWidget {
public:
    ButtonPanel();
private:
    QPushButton* button1;
    QPushButton* button2;
    QPushButton* button3;

};


#endif //TP2_BUTTONPANEL_H
