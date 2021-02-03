#include "spinboxdialog.h"
#include "ui_spinboxdialog.h"

SpinBoxDialog::SpinBoxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpinBoxDialog)
{
    ui->setupUi(this);
}

SpinBoxDialog::~SpinBoxDialog()
{
    delete ui;
}
