#ifndef DATETIMEDIALOG_H
#define DATETIMEDIALOG_H

#include <QDialog>

namespace Ui {
class DateTimeDialog;
}

class DateTimeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DateTimeDialog(QWidget *parent = nullptr);
    ~DateTimeDialog();

private:
    Ui::DateTimeDialog *ui;
};

#endif // DATETIMEDIALOG_H
