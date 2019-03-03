#include<iostream>

using namespace std;

void rememberMe();
const int num = 5;

int main()
{
	cout << "Global num is: " << num << endl;
	for(int count = 0; count < 5; count++)
	{
		rememberMe();
		cout << "Global num is still: " << num << endl;
	}	
	return 0;
}

void rememberMe()
{
	static int num = 1;
	cout << "My local num in rememberMe() is now: " << num << endl;
	num++;
}