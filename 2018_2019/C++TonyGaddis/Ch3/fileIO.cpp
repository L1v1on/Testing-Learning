#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	fstream file("C:\\Users\\3zr4\\Desktop\\Testing-Learning\\2018\\C++TonyGaddis\\Ch3\\fruit.txt", append);
	char fruit[20];
	int amount;
	char output[20];
	
	/* input data gets stored with no delimiters.
	/  write position resets each run causing data to be written over.
	/  need to fix it later~~~
	/  Update: Had to use the append constant in constructor. This is fixed now.
	*/
	cout << "Enter fruit name.\n";
	cin >> fruit;
	cout << "Enter amount.\n";
	cin >> amount;
	
	file << fruit << amount;
	
	file.close();
	return 0;
}