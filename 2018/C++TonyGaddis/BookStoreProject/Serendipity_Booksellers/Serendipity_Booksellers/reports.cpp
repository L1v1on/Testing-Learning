// reports menu of book seller program
#include <iostream>
#include "reports.h"

using namespace std;

int reports()
{
	int choice;
	
	do
	{
		cout << "Serendipity Booksellers\n"
			<< "Reports\n\n"
			<< "1. Inventory Listing\n"
			<< "2. Inventory Wholesale Value\n"
			<< "3. Inventory Retail Value\n"
			<< "4. Listing by Quantity\n"
			<< "5. Listing by Cost\n"
			<< "6. Listing by Age\n"
			<< "7. Return to the Main Menu\n\n"
			<< "Enter Your Choice:";
		cin >> choice;

		while ((choice < 1) || (choice > 7))
		{
			cout << "Enter a number 1-7\n";
			cin >> choice;
			cout << endl;
		}

		switch (choice)
		{
		case 1:
			repListing();
			break;

		case 2:
			repWholesale();
			break;

		case 3:
			repRetail();
			break;

		case 4:
			repQty();
			break;

		case 5:
			repCost();
			break;

		case 6:
			repAge();
			break;

		case 7:
			cout << "You picked:" << choice << endl;
			break;

		default:
			break;
		}
	}while(choice != 7);
	
	// system pause to see console window
	system("pause");
	return 0;
}

void repListing()
{
	cout << "You selected Inventory Listing.\n";
}

void repWholesale()
{
	cout << "You selected Inventory Wholesale Value.\n";
}

void repRetail()
{
	cout << "You selected Inventory Retail Value.\n";
}

void repQty()
{
	cout << "You selected Listing By Quantity.\n";
}

void repCost()
{
	cout << "You selected Listing By Cost.\n";
}

void repAge()
{
	cout << "You selected Listing By Age.\n";
}