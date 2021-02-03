#ifndef RADIOBUTTONDIALOG_H
#define RADIOBUTTONDIALOG_H

#include <QDialog>

namespace Ui {
class RadioButtonDialog;
}

class RadioButtonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RadioButtonDialog(QWidget *parent = nullptr);
    ~RadioButtonDialog();

private:
    Ui::RadioButtonDialog *ui;
};

#endif // RADIOBUTTONDIALOG_H
