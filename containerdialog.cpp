#include "containerdialog.h"
#include "ui_containerdialog.h"

ContainerDialog::ContainerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContainerDialog)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(3);
    QStringList labels { "Columna 1", "Columna 2" };
    ui->tableWidget->setHorizontalHeaderLabels(labels);
    ui->tableWidget->setItem(0, 0, new QTableWidgetItem("1"));
    ui->tableWidget->setItem(0, 1, new QTableWidgetItem("2"));
    ui->tableWidget->setItem(1, 0, new QTableWidgetItem("3"));
    ui->tableWidget->setItem(1, 1, new QTableWidgetItem("4"));
    ui->tableWidget->setItem(2, 0, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(2, 1, new QTableWidgetItem("6"));

    QStringList listLabels { "1", "2", "3", "4", "5" };
    ui->listWidget->addItems(listLabels);

    connect(ui->dial, &QDial::valueChanged, ui->horizontalSlider, &QSlider::setValue);
    connect(ui->dial, &QDial::valueChanged, ui->progressBar, &QProgressBar::setValue);
}

ContainerDialog::~ContainerDialog()
{
    delete ui;
}
