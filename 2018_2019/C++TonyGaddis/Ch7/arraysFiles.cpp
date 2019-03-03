#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const int ARR_SIZE = 4;
	int num[ARR_SIZE];
	ifstream inFile;
	ofstream outFile;

	//Make sure the path is correct or you will get garbage data. On laptop change 3zr4 to Livion.
	inFile.open("C:\\Users\\3zr4\\Desktop\\Testing-Learning\\2018_2019\\C++TonyGaddis\\Ch7\\testInput.txt");

	cout << "Reading data from file.\n";

	for (int c = 0; c < ARR_SIZE; c++)
		inFile >> num[c];

	inFile.close();

	cout << "Displaying data.\n";

	for (int c = 0; c < ARR_SIZE; c++)
		cout << num[c] << " ";

	cout << "\nUpdating data.\n";

	for (int c = 0; c < ARR_SIZE; c++)
		num[c] = num[c] + 1;

	outFile.open("C:\\Users\\3zr4\\Desktop\\Testing-Learning\\2018_2019\\C++TonyGaddis\\Ch7\\testOutput.txt");

	cout << "Saving updated data to another file.\n";

	for (int c = 0; c < ARR_SIZE; c++)
		outFile << num[c] << endl;

	return 0;
}