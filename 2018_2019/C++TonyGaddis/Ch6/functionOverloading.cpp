#include<iostream>
using namespace std;

int payCheck(int);
double payCheck(double);

int main ()
{
	int hoursI;
	double hoursD;
	int payI;
	double payD;
	cout << "Enter hours worked in integers." << endl;
	cin >> hoursI;
	cout << "Enter hours worked in double." << endl;
	cin >> hoursD;
	payI = payCheck(hoursI);
	payD = payCheck(hoursD);
	cout << "Whole hour pay: " << payI << endl;
	cout << "Non-whole hour pay: " << payD << endl;
}

int payCheck(int hours)
{
	return hours * 5;
}

double payCheck(double hours)
{
	return hours * 5.25;
}