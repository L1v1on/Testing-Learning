// inventory menu of book seller program
#include <iostream>
#include "invmenu.h"

using namespace std;

int invMenu()
{
	int choice;
	
	do
	{
		cout << "Serendipity Booksellers\n"
			<< "Inventory Database\n\n"
			<< "1. Look Up a Book\n"
			<< "2. Add a Book\n"
			<< "3. Edit a Book's Record\n"
			<< "4. Delete a Book\n"
			<< "5. Return to the Main Menu\n\n"
			<< "Enter Your Choice:";
		cin >> choice;

		while ((choice < 1) || (choice > 5))
		{
			cout << "Enter a number 1-5\n";
			cin >> choice;
			cout << endl;
		}

		switch (choice)
		{
		case 1:
			lookUpBook();
			break;

		case 2:
			addBook();
			break;

		case 3:
			editBook();
			break;

		case 4:
			deleteBook();
			break;

		case 5:
			cout << "You picked:" << choice << endl;
			break;

		default:
			break;
		}
	}while(choice != 5);
	
	// system pause to see console window
	system("pause");
	return 0;
}

void lookUpBook()
{
	cout << "You selected Look Up Book.\n";
}

void addBook()
{
	cout << "You selected Add Book.\n";
}

void editBook()
{
	cout << "You selected Edit Book.\n";
}

void deleteBook()
{
	cout << "You selected Delete Book.\n";
}