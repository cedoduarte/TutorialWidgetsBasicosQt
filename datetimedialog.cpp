#include "datetimedialog.h"
#include "ui_datetimedialog.h"

DateTimeDialog::DateTimeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DateTimeDialog)
{
    ui->setupUi(this);
}

DateTimeDialog::~DateTimeDialog()
{
    delete ui;
}
