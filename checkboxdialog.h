#ifndef CHECKBOXDIALOG_H
#define CHECKBOXDIALOG_H

#include <QDialog>

namespace Ui {
class CheckBoxDialog;
}

class CheckBoxDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CheckBoxDialog(QWidget *parent = nullptr);
    ~CheckBoxDialog();

private:
    Ui::CheckBoxDialog *ui;
};

#endif // CHECKBOXDIALOG_H
