#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QMdiSubWindow;

class ButtonDialog;
class CheckBoxDialog;
class ComboBoxDialog;
class ContainerDialog;
class DateTimeDialog;
class EmailDialog;
class RadioButtonDialog;
class SpinBoxDialog;

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();
private slots:
    void on_actionSalir_triggered();

    void on_actionButton_Dialog_triggered();

    void on_actionCheckBox_Dialog_triggered();

    void on_actionComboBox_Dialog_triggered();

    void on_actionContainer_Dialog_triggered();

    void on_actionDateTime_Dialog_triggered();

    void on_actionEmail_Dialog_triggered();

    void on_actionRadioButton_Dialog_triggered();

    void on_actionSpinBox_Dialog_triggered();

    void on_actionButton_Subwindow_triggered();

    void on_actionCheckBox_Subwindow_triggered();

    void on_actionComboBox_Subwindow_triggered();

    void on_actionContainer_Subwindow_triggered();

    void on_actionDateTime_Subwindow_triggered();

    void on_actionEmail_Subwindow_triggered();

    void on_actionRadioButton_Subwindow_triggered();

    void on_actionSpinBox_Subwindow_triggered();

private:
    Ui::MainWindow *ui;
    ButtonDialog *m_buttonDialog;
    CheckBoxDialog *m_checkBoxDialog;
    ComboBoxDialog *m_comboBoxDialog;
    ContainerDialog *m_containerDialog;
    DateTimeDialog *m_dateTimeDialog;
    EmailDialog *m_emailDialog;
    RadioButtonDialog *m_radioButtonDialog;
    SpinBoxDialog *m_spinBoxDialog;

    QMdiSubWindow *m_buttonSubwindow;
    QMdiSubWindow *m_checkBoxSubwindow;
    QMdiSubWindow *m_comboBoxSubwindow;
    QMdiSubWindow *m_containerSubwindow;
    QMdiSubWindow *m_dateTimeSubwindow;
    QMdiSubWindow *m_emailSubwindow;
    QMdiSubWindow *m_radioButtonSubwindow;
    QMdiSubWindow *m_spinBoxSubwindow;
};

#endif // MAINWINDOW_H
