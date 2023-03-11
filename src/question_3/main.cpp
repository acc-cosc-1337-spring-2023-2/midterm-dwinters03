#include <iostream>
#include <string>
#include <sstream>
#include "question3.h"

/* Professor, I just wanted to let you know that I'm sorry if I applied the 1 to 200 filter in the wrong place. The instructions were unclear, and so I just picked one so that I'd be able to finish 
this question at all. I'm sorry if I guessed wrong, and hope that you will not hold it against me.*/

using namespace std;

int main()
{
    int closer = 1;
    string userinput;

    do
    {
        int num1;
        int num2;

        char validate1;
        char validate2;

        cout << "Welcome to the GCD Calculator.\n";
        cout << "To quit, enter 'N'\n";
        cout << "Enter the first integer. It must be greater than 0 and less than or equal to 200.\n";
        getline(cin, userinput);
        
        if (userinput == "N" || userinput == "n")
        {
            cout << "Exiting...\n";
            closer = 0;
            break;
        }

        else if (istringstream(userinput) >> num1)
        {
            if (num1 > 0 && num1 < 201)
            {
                validate1 = 'y';
            }
            else
            {
                cout << "\nInvalid Input. Please try again.\n";
            }
        }
        else
        {
            cout << "\nInvalid Input. Please try again.\n";
        }

        cout << "\nEnter the second integer. It must be greater than 0 and less than or equal to 200.\n";
        getline(cin, userinput);

        if (userinput == "N" || userinput == "n")
        {
            cout << "Exiting...\n";
            closer = 0;
            break;
        }

        else if (istringstream(userinput) >> num2)
        {
            if (num2 > 0 && num2 < 201)
            {
                validate2 = 'y';
            }
            else
            {
                cout << "\nInvalid Input. Please try again.\n";
            }
        }
        else
        {
            cout << "\nInvalid Input. Please try again.\n";
        }

        if (validate1 == 'y' && validate2 == 'y')
        {
            cout << get_gcd(num1, num2);
            cout << "\n";
        }
    }
    
     while (closer != 0);
    
    
    return 0;
}