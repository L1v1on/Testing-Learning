#include<iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number 1-5.\n";
	cin >> num;
	
	while(num < 1 || num > 5)
	{
		cout << "Please enter a number 1-5.\n";
		cin >> num;
	}
	
	cout << "The number you entered is " << num << endl;
	return 0;
}