/*
 Erik Santana
 9/21/23
 CPMR 131 - Professor Q

 Description:
 Part 1: This class multiplies, divides, adds, subtracts 2 complex numbers. This class also checks if 2 complex numbers are equal or not.
 Part 2: This class multiplies, divides, adds, subtracts 2 rational numbers. This class also checks if 2 rational numbers are equal or not.
 Part 3: This class multiplies, divides, adds, subtracts 2 polynomials numbers. This class also checks if 2 polynomials numbers are equal or not.

 Credit:
 Complex: Joe Bryant & Erik Santana & Christian Hernandez
 Rational: Thanh Tran & John Kim
 Polynomials: Otoniel Torres Bernal & Saul Merino
 */

#include "Complex.h"
#include "Polynomials.h"
#include "Rational.h"
#include "input.h"

using namespace std;

void mainMenu();

int main()
{
    mainMenu();

	return 0;
}

// Pre-Condition: NA
// Post-Condition: no return. Main menu
void mainMenu()
{
    Complex complexObject;
    Polynomial polynomialObject;
    Rational rationalObject;

    cout << endl;
    cout << "\tCMPR131 - Chapter 4: Complex Numbers, Rational Numbers, Polynomials by Erik Santana (9 / 21 / 23)";
    cout << "\n\t" << string(80, char(205)) << endl;
    cout << "\t1> Complex Numbers" << endl;
    cout << "\t2> Rational Numbers" << endl;
    cout << "\t3> Polynomials" << endl;
    cout << "\n\t" << string(80, char(169));
    cout << "\n\t0 > exit" << endl;
    cout << "\n\t" << string(80, char(205)) << endl;

    // get user input/option of main menu
    int option = inputInteger("\n\tOption: ", 0, 3);

    // loop through main menu until user exits
    do
    {
        switch (option)
        {
            case 0: exit(1); break;
            case 1: system("cls"); complexObject.displayInformation(); break;
            case 2: system("cls"); rationalObject.RationalMenu(); break;
            case 3: system("cls"); polynomialObject.main(); break;
        }
        
        // new line
        cout << "\n";

    } while (true);
}