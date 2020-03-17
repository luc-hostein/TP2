//
// Created by Marcel on 18/02/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "ConfigurationDialog.h"

ConfigurationDialog::ConfigurationDialog() {
    QWidget* parent =new QWidget(this);
    this->setMinimumSize(200,100);

    QString oui = "Address IP";
    QString non = "User";
    QString peutetre = "Password";

    label1=new LabeledTextField(oui);
    label2=new LabeledTextField(non);
    label3=new LabeledTextField(peutetre);

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addLayout(label1->getLayout());
    layout->addLayout(label2->getLayout());
    layout->addLayout(label3->getLayout());

    parent->setLayout(layout);



}
