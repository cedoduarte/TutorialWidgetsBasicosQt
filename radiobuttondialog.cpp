#include "radiobuttondialog.h"
#include "ui_radiobuttondialog.h"

RadioButtonDialog::RadioButtonDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RadioButtonDialog)
{
    ui->setupUi(this);
}

RadioButtonDialog::~RadioButtonDialog()
{
    delete ui;
}
