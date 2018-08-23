#include<iostream>

using namespace std;

int main()
{
	int choice;
	
	do
	{
		cout << "Pick something.\n";
		cout << "-------------------\n";
		cout << "1. Blam\n";
		cout << "2. Blum\n";
		cout << "3. Blom\n";
		cout << "4. Exit\n";
		cin >> choice;
		
		while(choice < 0 || choice > 4)
		{
			cout << "Please enter a choice 1-4!\n";
			cin >> choice;
		}
		
		switch(choice)
		{
			case 1:
				cout << "Blam!!!\n";
				break;
				
			case 2:
				cout << "Blum!!!\n";
				break;
				
			case 3:
				cout << "Blom!!!\n";
				break;
		}
	}while(choice != 4);
	cout << "Bye bye!\n";
	return 0;
}