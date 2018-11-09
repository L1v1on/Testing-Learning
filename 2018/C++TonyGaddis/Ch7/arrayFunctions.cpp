#include<iostream>
using namespace std;

void arrayF(int[]);

int main()
{
	int arr[5] = {5,6,7,8,9};
	cout << "Display elements of array." << endl;
	for(int x = 0; x < 5; x++)
		cout << arr[x] << " ";
	cout << endl;
	cout << "Call arrayF() to pass by ref arr." << endl;
	arrayF(arr);
	cout << "Display new elements of arr." << endl;
	for(int x = 0; x < 5; x++)
		cout << arr[x] << " ";
	cout << endl;
}

void arrayF(int arr[])
{
	for(int x = 0; x < 5; x++)
		arr[x]++;
}