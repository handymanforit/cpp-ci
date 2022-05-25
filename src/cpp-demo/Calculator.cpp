#include "Calculator.h"

Calculator::Calculator()
{
    varone = 1;
    vartwo = 2;
    varthree = 3;

}

double Calculator::Calculate(double x, char oper, double y)
{


    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
}
