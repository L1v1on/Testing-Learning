#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x = 0;
	int a = 0, b = 10, n = 1000000;
	
	for(int i = 0; i < n; i++)
	{
		x += a+(i+.5)*(b-a)/n*(b-a)/n;
	}
	
	cout << x;
	return 0;
}