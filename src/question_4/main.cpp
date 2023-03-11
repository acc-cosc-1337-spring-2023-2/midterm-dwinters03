#include <iostream>
#include <string>
#include <sstream>
#include "question4.h"

using namespace std;

int main()
{
    string userin;

    do
    {
        double gpa;

        cout << "Enter a GPA Value, or enter 'N' to quit:\n";
        getline(cin,userin);

        if(userin == "N" || userin == "n")
        {
            cout << "Exiting...\n";
            userin = "Exit";
            break;
        }

        else if (istringstream(userin) >> gpa)
        {
            if(gpa >= 0.0 && gpa <= 4.0)
            {
                string letter_grade = gpa_to_letter_grade(gpa);
                cout << letter_grade;
                cout << "\n";
            }
            else
            {
                cout << "Invalid Input. Please enter a valid GPA value, or enter 'N' to quit.\n";
            }
        }

    }

    while(userin != "Exit");

    return 0;
}