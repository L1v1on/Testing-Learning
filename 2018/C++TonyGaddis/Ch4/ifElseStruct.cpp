#include<iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number.\n";
	cin >> num;
	
	if(num >= 0)
		cout << "You entered a positive number: " << num << endl;
	else
		cout << "You entered a negative number: " << num << endl;
	
	return 0;
}