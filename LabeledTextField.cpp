//
// Created by Marcel on 18/02/2020.
//

#include <QtWidgets/QHBoxLayout>
#include "LabeledTextField.h"

LabeledTextField::LabeledTextField() {
    hLayout = new QHBoxLayout();

    label = new QLabel(this);
    text = new QTextEdit(this);
    text->setMinimumSize(100,50);

    hLayout->addWidget(label);
    hLayout->addWidget(text);

//    this->setLayout(hLayout);


}

LabeledTextField::LabeledTextField(QString& string) {
    hLayout = new QHBoxLayout();

    label = new QLabel(this);
    label->setText(string);
    text = new QTextEdit(this);
    text->setMaximumSize(100,20);

    hLayout->addWidget(label);
    hLayout->addWidget(text);

//    this->setLayout(hLayout);   attention ne pas mettre cette ligne sinon le Layout à plusieurs parents


}

QLayout *LabeledTextField::getLayout() {
    return hLayout;
}
