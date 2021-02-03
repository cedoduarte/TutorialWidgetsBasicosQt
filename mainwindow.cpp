#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "buttondialog.h"
#include "checkboxdialog.h"
#include "comboboxdialog.h"
#include "containerdialog.h"
#include "datetimedialog.h"
#include "emaildialog.h"
#include "radiobuttondialog.h"
#include "spinboxdialog.h"

#include <QMdiSubWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_buttonDialog = new ButtonDialog(this);
    m_checkBoxDialog = new CheckBoxDialog(this);
    m_comboBoxDialog = new ComboBoxDialog(this);
    m_containerDialog = new ContainerDialog(this);
    m_dateTimeDialog = new DateTimeDialog(this);
    m_emailDialog = new EmailDialog(this);
    m_radioButtonDialog = new RadioButtonDialog(this);
    m_spinBoxDialog = new SpinBoxDialog(this);

    m_buttonSubwindow = nullptr;
    m_checkBoxSubwindow = nullptr;
    m_comboBoxSubwindow = nullptr;
    m_containerSubwindow = nullptr;
    m_dateTimeSubwindow = nullptr;
    m_emailSubwindow = nullptr;
    m_radioButtonSubwindow = nullptr;
    m_spinBoxSubwindow = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSalir_triggered()
{
    close();
}

void MainWindow::on_actionButton_Dialog_triggered()
{
    m_buttonDialog->show();
}

void MainWindow::on_actionCheckBox_Dialog_triggered()
{
    m_checkBoxDialog->show();
}

void MainWindow::on_actionComboBox_Dialog_triggered()
{
    m_comboBoxDialog->show();
}

void MainWindow::on_actionContainer_Dialog_triggered()
{
    m_containerDialog->show();
}

void MainWindow::on_actionDateTime_Dialog_triggered()
{
    m_dateTimeDialog->show();
}

void MainWindow::on_actionEmail_Dialog_triggered()
{
    m_emailDialog->show();
}

void MainWindow::on_actionRadioButton_Dialog_triggered()
{
    m_radioButtonDialog->show();
}

void MainWindow::on_actionSpinBox_Dialog_triggered()
{
    m_spinBoxDialog->show();
}

void MainWindow::on_actionButton_Subwindow_triggered()
{
    m_buttonSubwindow = ui->mdiArea->addSubWindow(new ButtonDialog(this));
    m_buttonSubwindow->show();
}

void MainWindow::on_actionCheckBox_Subwindow_triggered()
{
    m_checkBoxSubwindow = ui->mdiArea->addSubWindow(new CheckBoxDialog(this));
    m_checkBoxSubwindow->show();
}

void MainWindow::on_actionComboBox_Subwindow_triggered()
{
    m_comboBoxSubwindow = ui->mdiArea->addSubWindow(new ComboBoxDialog(this));
    m_comboBoxSubwindow->show();
}

void MainWindow::on_actionContainer_Subwindow_triggered()
{
    m_containerSubwindow = ui->mdiArea->addSubWindow(new ContainerDialog(this));
    m_containerSubwindow->show();
}

void MainWindow::on_actionDateTime_Subwindow_triggered()
{
    m_dateTimeSubwindow = ui->mdiArea->addSubWindow(new DateTimeDialog(this));
    m_dateTimeSubwindow->show();
}

void MainWindow::on_actionEmail_Subwindow_triggered()
{
    m_emailSubwindow = ui->mdiArea->addSubWindow(new EmailDialog(this));
    m_emailSubwindow->show();
}

void MainWindow::on_actionRadioButton_Subwindow_triggered()
{
    m_radioButtonSubwindow = ui->mdiArea->addSubWindow(new RadioButtonDialog(this));
    m_radioButtonSubwindow->show();
}

void MainWindow::on_actionSpinBox_Subwindow_triggered()
{
    m_spinBoxSubwindow = ui->mdiArea->addSubWindow(new SpinBoxDialog(this));
    m_spinBoxSubwindow->show();
}
