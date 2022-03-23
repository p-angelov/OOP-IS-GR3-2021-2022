#include "Rational.h"

class A
{
    const int c;

    int var1;
    int var2;

    public:
        A(int value, int value1, int value2)
            :c(value), var2(value2), var1(value1) //работа с константи и как се инициализират с инициализиращ списък
        {
           // c = value; невалидна операция
        }
};

int main()
{
    Rational r(2);
    r.setDenominator(3);

    return 0;
}