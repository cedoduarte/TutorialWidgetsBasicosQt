#ifndef BUTTONDIALOG_H
#define BUTTONDIALOG_H

#include <QDialog>

namespace Ui {
class ButtonDialog;
}

class ButtonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ButtonDialog(QWidget *parent = nullptr);
    ~ButtonDialog();

private slots:
    void on_msg1_pushButton_clicked();

    void on_msg2_pushButton_2_clicked();

    void on_msg3_pushButton_3_clicked();

    void on_msg4_pushButton_4_clicked();

    void on_msg5_pushButton_5_clicked();

    void on_msg6_pushButton_6_clicked();

    void on_msg7_pushButton_7_clicked();

    void on_msg8_pushButton_8_clicked();

    void on_msg9_pushButton_9_clicked();

    void on_msg10_pushButton_10_clicked();

private:
    Ui::ButtonDialog *ui;
};

#endif // BUTTONDIALOG_H
