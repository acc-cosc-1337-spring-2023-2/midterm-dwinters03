#include <iostream>
#include <string>
#include <limits>
#include "question1.h"

using namespace std;

int main()
{
    int menuinput;

    do
    {
        double kilograms;
        double velocity;
        //double kinetic_energy;


        cout << "Welcome to the kinetic energy calculator!\n\n1. Find kinetic energy\n2. Exit\n\n";
        cin >> menuinput;

        switch (menuinput)
        {
            case 1:
                cout << "\nWhat is the mass in kilograms?\n";
                //cin >> kilograms;

               while (!(cin >> kilograms))
                {
                    cerr << "Error: Input invalid. Please enter a number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }

                cout << "\nWhat is the velocity in meters per second?\n";
                //cin >> velocity;

                while(!(cin >> velocity))
                {
                    cerr << "Error: Input invalid. Please enter a number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }

                cout << get_kinetic_energy(kilograms, velocity);
                cout << "\n";
                //cout << kinetic_energy;
                break;
        
        case 2:
            cout << "Exiting...\n";
            break;
        
        default:
            std::cout << "\nInvalid Input.\n";
            break;
        }
    }

    while(menuinput != 2); 
}