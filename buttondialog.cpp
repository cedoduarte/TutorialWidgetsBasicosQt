#include "buttondialog.h"
#include "ui_buttondialog.h"

#include <QMessageBox>

ButtonDialog::ButtonDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ButtonDialog)
{
    ui->setupUi(this);
}

ButtonDialog::~ButtonDialog()
{
    delete ui;
}

void ButtonDialog::on_msg1_pushButton_clicked()
{
    QMessageBox::information(this, "Mensaje 1", "Hola mundo");
}

void ButtonDialog::on_msg2_pushButton_2_clicked()
{
    QMessageBox::information(this, "Mensaje 2", "Hola mundo");
}

void ButtonDialog::on_msg3_pushButton_3_clicked()
{
    QMessageBox::information(this, "Mensaje 3", "Hola mundo");
}

void ButtonDialog::on_msg4_pushButton_4_clicked()
{
    QMessageBox::information(this, "Mensaje 4", "Hola mundo");
}

void ButtonDialog::on_msg5_pushButton_5_clicked()
{
    QMessageBox::information(this, "Mensaje 5", "Hola mundo");
}

void ButtonDialog::on_msg6_pushButton_6_clicked()
{
    QMessageBox::information(this, "Mensaje 6", "Hola mundo");
}

void ButtonDialog::on_msg7_pushButton_7_clicked()
{
    QMessageBox::information(this, "Mensaje 7", "Hola mundo");
}

void ButtonDialog::on_msg8_pushButton_8_clicked()
{
    QMessageBox::information(this, "Mensaje 8", "Hola mundo");
}

void ButtonDialog::on_msg9_pushButton_9_clicked()
{
    QMessageBox::information(this, "Mensaje 9", "Hola mundo");
}

void ButtonDialog::on_msg10_pushButton_10_clicked()
{
    QMessageBox::information(this, "Mensaje 10", "Hola mundo");
}
