#ifndef COMBOBOXDIALOG_H
#define COMBOBOXDIALOG_H

#include <QDialog>

namespace Ui {
class ComboBoxDialog;
}

class ComboBoxDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ComboBoxDialog(QWidget *parent = nullptr);
    ~ComboBoxDialog();

private:
    Ui::ComboBoxDialog *ui;
};

#endif // COMBOBOXDIALOG_H
