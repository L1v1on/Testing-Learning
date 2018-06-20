// reports menu of book seller program
#include <iostream>

using namespace std;

int main()
{
	int choice;

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
	cout << "You picked:" << choice << endl;
	// system pause to see console window
	system("pause");
	return 0;
}