#include<iostream>

using namespace std;

void timesTen(int);

int main()
{
	int num;
	
	cout << "Enter a number.\n";
	cin >> num;
	cout << "Leaving main() calling timesTen()\n";
	timesTen(num);
	cout << "Welcome back to main! BYE!\n";
	
	return 0;
}

void timesTen(int x)
{
	cout << x * 10 << endl;
	cout << "Leaving timesTen() CYA!\n";
}