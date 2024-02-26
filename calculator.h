#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>



class calculator
{
public:
    calculator();
    int reset();
    int digit(int d);
    int operation(int o);
    int calculate();
    QString india();
    int div();
    int sq();
    int roo();
    QString show_face();
    QString general_face;
    int temp;

private:

    double value1;
    double value2;
    int oper;
    double result;

};

#endif // CALCULATOR_H
