// main menu of book seller program
#include <iostream>
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"

using namespace std;

int main()
{
	int choice;
	do
	{
		cout << "Serendipity Booksellers\n"
			<< "Main Menu\n\n"
			<< "1. Cashier Module\n"
			<< "2. Inventory Database Module\n"
			<< "3. Report Module\n"
			<< "4. Exit\n\n"
			<< "Enter Your Choice:";
		cin >> choice;

		while ((choice < 1) || (choice > 4))
		{
			cout << "Enter a number 1-4\n";
			cin >> choice;
			cout << endl;
		}

		switch (choice)
		{
		case 1:
			cashier();
			break;

		case 2:
			invMenu();
			break;

		case 3:
			reports();
			break;

		case 4:
			cout << "You picked:" << choice << endl;
			break;

		default:
			break;
		}
	}while(choice != 4);
	
	// system pause to see console window
	system("pause");
	return 0;
}