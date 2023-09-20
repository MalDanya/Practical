#include "QTestValidator.h"


namespace  {

}

QTestValidator::QTestValidator(QLineEdit *parent)
    : QLineEdit {parent}
{
    connect(this,SIGNAL(changeAngle()),this,SLOT(update()));
}

void QTestValidator::TestVal()
{

}
