// book information menu of book seller program
#include <iostream>
#include "bookinfo.h"

using namespace std;

int bookInfo()
{
	cout << "Serendipity Booksellers\n"
		<< "Book Information\n\n"
		<< "ISBN:\n"
		<< "Title:\n"
		<< "Author:\n"
		<< "Publisher:\n"
		<< "Date Added:\n"
		<< "Quantity-On-Hand:\n"
		<< "Wholesale Cost:\n"
		<< "Retail Price:";
	// system pause to see console window
	system("pause");
	return 0;
}