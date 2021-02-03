#ifndef SPINBOXDIALOG_H
#define SPINBOXDIALOG_H

#include <QDialog>

namespace Ui {
class SpinBoxDialog;
}

class SpinBoxDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SpinBoxDialog(QWidget *parent = nullptr);
    ~SpinBoxDialog();

private:
    Ui::SpinBoxDialog *ui;
};

#endif // SPINBOXDIALOG_H
