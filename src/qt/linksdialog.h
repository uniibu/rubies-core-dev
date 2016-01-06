#ifndef LINKSDIALOG_H
#define LINKSDIALOG_H

#include <QDialog>

namespace Ui {
    class LinksDialog;
}

class LinksDialog : public QDialog {
    Q_OBJECT

public:
    explicit LinksDialog(QWidget *parent = 0);
    ~LinksDialog();

private:
    Ui::LinksDialog *ui;

private slots:
    void on_buttonBox_accepted();
};

#endif // LINKSDIALOG_H
