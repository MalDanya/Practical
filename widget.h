#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QTestValidator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_editingFinished();

    void on_TestVal_1_textEdited(const QString &arg1);

    void on_TestVal_1_editingFinished();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
