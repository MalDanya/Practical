#include "widget.h"
#include "ui_widget.h"
#include "TestValidator.h"
#include <QString>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;


}




void Widget::on_lineEdit_editingFinished()
{
   //double angle =ui->lineEdit->text().toDouble();
}

