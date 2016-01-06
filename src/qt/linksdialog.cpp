#include "linksdialog.h"
#include "ui_linksdialog.h"


LinksDialog::LinksDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LinksDialog)
{
    ui->setupUi(this);
}


LinksDialog::~LinksDialog()
{
    delete ui;
}

void LinksDialog::on_buttonBox_accepted()
{
    close();
}
