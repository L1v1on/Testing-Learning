// Chapter 2 programming challenge #8
#include <iostream>

using namespace std;

int main()
{
	// initialize variables to hold price of 5 items
	float item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
	// variables to hold subtotal, sales tax, and total 
	float subTotal, salesTax = 0.06, taxAmount, total;
	
	// calculate sales
	subTotal = item1 + item2 + item3 + item4 + item5;
	taxAmount = subTotal * salesTax;
	total = subTotal + taxAmount;
	
	// display information
	cout << "Item prices:\n"
		 << "1. $" << item1 << endl
		 << "2. $" << item2 << endl
		 << "3. $" << item3 << endl
		 << "4. $" << item4 << endl
		 << "5. $" << item5 << endl
		 << "Subtotal: $" << subTotal << endl
		 << "Sales Tax: " << salesTax << "%" << endl
		 << "Total: $" << total << endl; 
	
	// system pause to view console 
	system("pause");
	return 0;
}