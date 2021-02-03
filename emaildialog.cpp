#include "emaildialog.h"
#include "ui_emaildialog.h"

EmailDialog::EmailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmailDialog)
{
    ui->setupUi(this);

    for (int year = 1900; year <= 2021; ++year)
    {
        ui->year_comboBox->addItem(QString::number(year));
    }

    QStringList countries { "México", "Perú", "España", "Argentina", "Ecuador", "Colombia", "Venezuela", "Paraguay" };
    ui->country_comboBox_2->addItems(countries);
}

EmailDialog::~EmailDialog()
{
    delete ui;
}
