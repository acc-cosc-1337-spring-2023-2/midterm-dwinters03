#include <iostream>
#include <string>
#include <sstream>
#include <question2.h>

using namespace std;

int main()
{
    string userinput;
    int end;
    double C;
    double F;

    do
    {
        cout << "Enter a temperature in Celsius (Enter 'N' to quit.)\n";
        getline(cin, userinput);

        if (userinput == "N" || userinput == "n")
        {
            cout << "Goodbye...\n";
            string userinput;
            break;
        }

        else if (istringstream(userinput) >> C)
        {
            F = get_fahrenheit(C);
            cout << F;
            cout << "\n";
        }

        else
        {
            cout << "Invalid Input. Please enter either a temperature in celsius or 'N'.\n";
        }


    } 
    
    while (!(end = 0));
    

    return 0;
}