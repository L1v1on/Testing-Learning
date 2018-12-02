// cashier menu of book seller program
#include <iostream>
#include <iomanip>
#include "cashier.h"

using namespace std;

int cashier()
{
	char date[9];
	int qty;
	char isbn[20];
	char title[20];
	const float SALES_TAX = 0.06;
	double price;
	double total;
	double subTotal;
	double tax;
	int choice;

	do
	{
		// must use cin.ignore function to skip '\n' characters left in keyboard buffer
		cout << "Enter the date in MM/DD/YY format.\n";
		cin >> date;
		cin.ignore();
		cout << "Enter the number of books.\n";
		cin >> qty;
		cin.ignore();
		cout << "Enter the ISBN number.\n";
		cin.getline(isbn, 20);
		cout << "Enter the title of the book.\n";
		cin.getline(title, 20);
		cout << "Enter the price of the book.\n";
		cin >> price;
		cin.ignore();

		subTotal = price * qty;
		tax = subTotal * SALES_TAX;
		total = subTotal + tax;

		// need to play around more with the output formatting
		cout << setprecision(2) << showpoint << fixed;
		cout << "Serendipity Booksellers\n\n"
			<< "Date: " << date << endl << endl
			<< "Qty    ISBN        Title            Price    Total\n"
			<< "-------------------------------------------------------\n" << setw(2)
			<< qty << setw(15) << isbn << setw(13) << title << setw(6) << "$" << price << setw(6) << "$" << subTotal << "\n\n"
			<< "Subtotal" << setw(37) << "$" << subTotal << endl
			<< "Tax" << setw(42) << "$" << tax << endl
			<< "Total" << setw(40) << "$" << total << endl << endl
			<< "Thank You for Shopping at Serendipity!\n";
			
		cout << "Process another transaction?\n"
			<< "Enter 0 for No or 1 for Yes.\n";
		cin >> choice;
		
		while(choice < 0 || choice > 1)
		{
			cout << "Enter 0 for No or 1 for Yes.\n";
			cin >> choice;
		}
	}while(choice != 0);
	
	// system pasue to see console window
	system("pause");
	return 0;
}