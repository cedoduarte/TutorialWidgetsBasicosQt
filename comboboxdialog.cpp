#include "comboboxdialog.h"
#include "ui_comboboxdialog.h"

ComboBoxDialog::ComboBoxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComboBoxDialog)
{
    ui->setupUi(this);

    QStringList texts { "1", "2", "3", "4", "5" };
    ui->comboBox->addItems(texts);
    ui->comboBox_2->addItems(texts);
    ui->comboBox_3->addItems(texts);
    ui->comboBox_4->addItems(texts);
    ui->comboBox_5->addItems(texts);
}

ComboBoxDialog::~ComboBoxDialog()
{
    delete ui;
}
