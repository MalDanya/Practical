#include "widget.h"
#include "ui_widget.h"
#include "QTestValidator.h"
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


void Widget::on_TestVal_1_editingFinished()
{
     //double angle =ui->lineEdit->text().toDouble();
}

