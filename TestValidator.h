#ifndef TESTVALIDATOR_H
#define TESTVALIDATOR_H

#include <QWidget>
#include <QValidator>
#include <QLineEdit>

namespace Ui {
class Widget;
}

class TestValidator : public QLineEdit
{
    Q_OBJECT
    Q_PROPERTY(double angle READ getAngle WRITE setAngle NOTIFY changeAngle)

public:
    explicit TestValidator (QLineEdit *parent = nullptr);
    virtual void TestVal();
    inline double getAngle(){return AngleVal;};
    inline void setAngle(double n_val){
                if ((-360< AngleVal) && (AngleVal <360))
                    AngleVal=n_val;
                emit changeAngle();
}


private:
    double AngleVal;
signals:
    void changeAngle();
};

#endif // TESTVALIDATOR_H
