// arrayInputFileTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	const int ARR_SIZE = 4;
	int num[ARR_SIZE];
	ifstream inFile;

	//Wrong path will produce garbage data. Desktop PC is 3zr4, laptop is Livion.
	inFile.open("C:\\Users\\Livion\\Desktop\\Testing_Learning\\2018\\C++TonyGaddis\\Ch7\\testInput.txt");

	for (int c = 0; c < ARR_SIZE; c++)
		inFile >> num[c];

	inFile.close();

	for (int c = 0; c < ARR_SIZE; c++)
		cout << num[c] << " ";

	system("pause");
    return 0;
}

