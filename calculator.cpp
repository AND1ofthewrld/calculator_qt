#include "calculator.h"
#include <cmath>
calculator::calculator()
{

}

int calculator::reset(){
    value1 = 0;
    value2 = 0;
    oper = 0;
    result = 0;
    temp = 0;
    general_face = "";
}

int calculator::digit(int d)
{
    if (oper == 0){
        value1 = value1 * 10 + d;
        result = value1;

        general_face += QString::number(d);



    } else {
        value2 = value2 * 10 + d;
        result = value2;

        general_face += QString::number(d);

    }
    return 0;
}

int calculator::operation(int o)
{
    oper = o;
    return 0;
}

int calculator::calculate()
{
    switch (oper) {
    case 1:

        result = value1 + value2;

        break;
    case 2:
        result = value1 - value2;
        break;
    case 3:
        result = value1 * value2;
        break;
    case 4:
        result = value1 / value2;
    default:
        break;
    }
    return 0;

}

QString calculator::india()
{
    return QString::number(result);
}

int calculator::div()
{

    result = 1 / value1;
}

int calculator::sq()
{
    result = value1 * value1;
}

int calculator::roo()
{
    result = sqrt(value1);
}

QString calculator::show_face()
{

    return general_face;
}
