#include "question3.h"

bool test_config()
{
    return true;
}

int get_gcd(int num1, int num2)
{
    int remainder = 1;

    if (num1 < num2)
    {
        int holder;
        holder = num1;
        num1 = num2;
        num2 = holder;        
    }
    else if (num1 == num2)
    {
        return num1;
    }

    while(remainder != 0)
    {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    if (num1 == 0 || num2 == 0)
    {
        return -1;
    }
    else
    {
        return num1;
    }
}