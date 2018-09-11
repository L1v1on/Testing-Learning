#include<iostream>

using namespace std;

void timesTen(int);
int newNum(int);

int main()
{
	int num;
	
	cout << "Enter a number.\n";
	cin >> num;
	cout << "Leaving main() calling timesTen()\n";
	timesTen(num);
	cout << "Welcome back to main!\n";
	cout << "Leaving main() calling newNum()\n";
	num = newNum(num);
	cout << "Welcome back to main! Hey new num!: " << num << endl;
	cout << "BYE!\n";
	
	return 0;
}

void timesTen(int x)
{
	cout << x * 10 << endl;
	cout << "Leaving timesTen() CYA!\n";
}

int newNum(int x)
{
	return x * 7;
}