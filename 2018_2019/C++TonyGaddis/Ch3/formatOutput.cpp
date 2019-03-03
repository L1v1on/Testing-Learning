#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double taxRate, itemPrice, salesTax, total; 
	cout << "Enter price of item.\n";
	cin >> itemPrice;
	cout << "Enter sales tax rate in decimal format.\n";
	cin >> taxRate;
	
	salesTax = itemPrice * taxRate;
	total = itemPrice + salesTax;
	
	cout << "Total Price: $" << showpoint << fixed << setprecision(2) << total << endl;
	system("pause");
	return 0;
}