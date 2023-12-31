#pragma once
#include<iostream>
#include<string>
using namespace std;

//input (1) header files inputs validation
char inputChar(string prompt, string lookup);
int inputInteger(string prompt, int startRange, int endRange);
double inputDouble(string prompt);
void mainMenu();

//precondition: going to create two pointers for real number and imaginary number
//postcondition: going to then have defualt and constructor, deconstructor, getters(mutators) and setters(accesors), and overloading operators
class Complex {
private:
	double* realNumber, * imaginaryNumber;
public:
	//default constructor
	Complex();
	//constructor
	Complex(double a, double b);
	//deconstructor to delete memory
	~Complex();

	//getters(accesors)
	double getRealNumber() const;
	double getImaginaryNumber() const;
	//setters(mutators)
	void setRealNumber(double newRealNumber);
	void setImaginaryNumber(double newImaginaryNumber);

	//member function that is going to get the display information (formula for formula compelx)
	void getFormulaInformation();
	//member function that gets me the negated formula answer
	void getNegatedComplexNumber() const;

	//member function that has my information
	void displayInformation();

	//overloading operators  +, -, *, /
	friend double operator+(const Complex& obj1, double value);
	friend double operator-(const Complex& obj1, double value);
	friend double operator*(const Complex& obj1, double value);
	friend double operator/(const Complex& obj1, double value);

	//overloading operators for 2 objects and overloading operators  ==,!=,+,-,*,/
	friend bool operator==(const Complex& obj1, const Complex& obj2);
	friend bool operator!=(const Complex& obj1, const Complex& obj2);

	//overloading operators with 2 objects
	friend Complex operator+(Complex& obj1, Complex& obj2);
	friend Complex operator*(const Complex& c3, int value);
	friend Complex operator/(const Complex& c3, int value);
	friend Complex operator-(Complex& obj1, Complex& obj2);
	friend Complex operator*(Complex& obj1, Complex& obj2);
	friend Complex operator/(Complex& obj1, Complex& obj2);

	//member function to get the evualte
	void evaluteSteps(Complex& obj1, Complex& obj2);
};
