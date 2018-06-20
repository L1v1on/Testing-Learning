#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double f, c;
	cout << "Enter degrees in celsius.\n";
	cin >> c;
	
	f = (static_cast<double>(9)/5) * c + 32;
	
	cout << "The degrees in fahrenheit is: " << f << endl;
	system("pause");
	return 0;
}