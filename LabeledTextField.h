//
// Created by Marcel on 18/02/2020.
//

#ifndef TP2_LABELEDTEXTFIELD_H
#define TP2_LABELEDTEXTFIELD_H


#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

class LabeledTextField : public QWidget{

private:
    QLabel* label;
    QTextEdit* text;
    QLayout* hLayout;
public:
    LabeledTextField();
    LabeledTextField(QString &text);
    QLayout* getLayout();


};


#endif //TP2_LABELEDTEXTFIELD_H
