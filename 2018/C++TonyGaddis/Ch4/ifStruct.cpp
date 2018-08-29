#include<iostream>

using namespace std;

int main()
{
	int a;
	
	cout << "Enter an integer.\n";
	cin >> a;
	
	if(a > 100)
		cout << "You picked a number higher than 100. " << a << endl;
	
	cout << "Thank you.\n";
	return 0;
}