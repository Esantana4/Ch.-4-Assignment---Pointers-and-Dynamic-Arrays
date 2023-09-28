/*
 Erik Santana
 9/21/23
 CPMR 131 - Professor Q

 Description:
 Part 1, Complex: This class multiplies, divides, adds, subtracts a complex number with a constant. This class also checks if 2 complex numbers are equal or not.
 Part 2, Rational: This class multiplies, divides, adds, subtracts a rational number with a constant. This class also normailizes and negates a rational number.
 Part 3, Polynomials: This class works with polynomials to find derivatives, solve for integral and solve for a polynomial with a constant value.

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