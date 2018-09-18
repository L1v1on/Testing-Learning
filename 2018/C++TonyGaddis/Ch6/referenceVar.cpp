#include<iostream>

using namespace std;

void numChange(int&);

int main()
{
	int num = 0;
	cout << "main() local num is: " << num << endl;
	numChange(num);
	cout << "main() local num is now: " << num << endl;
	
	return 0;
}

void numChange(int &numR)
{
	cout << "numChange() will now change main() local num\n"; 
	numP = 23;
}