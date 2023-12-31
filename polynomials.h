#pragma once
#include <iostream>
#include<vector>
#include <string>
#include<iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

//input (1) header files inputs validation
char inputChar(string prompt, string lookup);
int inputInteger(string prompt, int startRange, int endRange);
double inputDouble(string prompt);

//precondition: going to creat a class that gets me the coefficients 
//postcondition: going to be using a pointer, then allocate and deallocate so memory does not leak
class Polynomial {
private:
    vector<double> coefficients;
    bool termsEntered = false;
    bool coefficientsSpecified = false;

public:
    //defualt constructor
    Polynomial();
    void enterTerms();
    void specifyCoefficients();
    double evaluateExpression(double x);
    Polynomial derivative();
    Polynomial integral();
    void printPolynomial(const Polynomial& poly);
    //member function that has the main menu
    void main();

    Polynomial add(const Polynomial& p) const;
    Polynomial subtract(const Polynomial& p) const;
    Polynomial multiply(const Polynomial& p) const;
    Polynomial scalarMultiply(double scalar) const;
};