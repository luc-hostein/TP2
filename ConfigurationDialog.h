//
// Created by Marcel on 18/02/2020.
//

#ifndef TP2_CONFIGURATIONDIALOG_H
#define TP2_CONFIGURATIONDIALOG_H


#include <QtWidgets/QDialog>
#include "LabeledTextField.h"

class ConfigurationDialog : public QDialog{
private:
    LabeledTextField* label1;
    LabeledTextField* label2;
    LabeledTextField* label3;
public:
    ConfigurationDialog();


};


#endif //TP2_CONFIGURATIONDIALOG_H
