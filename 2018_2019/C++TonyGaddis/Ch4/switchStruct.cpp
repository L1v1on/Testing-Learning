#include<iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number 1-4.\n";
	cin >> num;
	
	switch(num)
	{
		case 1:
			cout << "You entered " << num << endl;
			break;
		case 2:
			cout << "You entered " << num << endl;
			break;
		case 3:
			cout << "You entered " << num << endl;
			break;
		case 4:
			cout << "You entered " << num << endl;
			break;
		default:
			cout << "You entered a number out of range " << num << endl;
	}
	return 0;
}