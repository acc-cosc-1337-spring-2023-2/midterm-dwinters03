#include <iostream>
#include <string>
#include "question4.h"

using namespace std;

bool test_config()
{
    return true;
}

string gpa_to_letter_grade(double gpa)
{
    string lettergrade;

    if (gpa > 3.49 && gpa <= 4.0)
    {
        lettergrade = "A";
    }
    else if (gpa > 2.99 && gpa < 3.5)
    {
        lettergrade = "B";
    }
    else if (gpa > 1.99 && gpa < 3)
    {
        lettergrade = "C";
    }
    else if (gpa > 0.99 && gpa < 2)
    {
        lettergrade = "D";
    }
    else if (gpa >= 0 && gpa < 1)
    {
        lettergrade = "F";
    }
    else
    {
        lettergrade = "Invalid Input";
    }
    return lettergrade;
}