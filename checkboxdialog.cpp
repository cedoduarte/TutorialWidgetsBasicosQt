#include "checkboxdialog.h"
#include "ui_checkboxdialog.h"

CheckBoxDialog::CheckBoxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckBoxDialog)
{
    ui->setupUi(this);
}

CheckBoxDialog::~CheckBoxDialog()
{
    delete ui;
}
