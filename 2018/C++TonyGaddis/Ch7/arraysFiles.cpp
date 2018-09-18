#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	const int ARR_SIZE = 4;
	int num[ARR_SIZE];
	ifstream inFile;
	
	//Make sure the path is correct or you will get garbage data.
	inFile.open("C:\\Users\\Livion\\Desktop\\Testing_Learning\\2018\\C++TonyGaddis\\Ch7\\testInput.txt");
	
	for(int c = 0; c < ARR_SIZE; c++)
		inFile >> num[c];
		
	inFile.close();
	
	for(int c = 0; c < ARR_SIZE; c++)
		cout << num[c] << " ";
	
	return 0;
}