#ifndef QTESTVALIDATOR_H
#define QTESTVALIDATOR_H

#include <QLineEdit>
#include <QObject>
#include <QWidget>

class QTestValidator : public QLineEdit
{

    Q_OBJECT
    Q_PROPERTY(double angle READ getAngle WRITE setAngle NOTIFY changeAngle)

public:

    explicit QTestValidator (QLineEdit *parent = nullptr);
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

#endif // QTESTVALIDATOR_H





