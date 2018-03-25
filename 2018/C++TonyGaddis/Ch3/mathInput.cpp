#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double area, radius;
	
	cout << "Enter the radius of the circle.";
	cin >> radius;
	area = 3.14 * pow(radius, 2.0);
	cout << area;
	
	return 0;
}