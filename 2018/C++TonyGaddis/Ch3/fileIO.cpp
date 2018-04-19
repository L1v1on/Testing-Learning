#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream file("C:\\Users\\3zr4\\Desktop\\Testing-Learning\\2018\\C++TonyGaddis\\Ch3\\fruit.txt");
	char fruit[20];
	int amount;
	char output[20];
	
	/* input data gets stored with no delimiters.
	/  write position resets each run causing data to be written over.
	/  need to fix it later~~~
	*/
	cout << "Enter fruit name.\n";
	cin >> fruit;
	cout << "Enter amount.\n";
	cin >> amount;
	
	file << fruit << ": " << amount;
	
	// reads data from txt file but output is not right.
	/* file >> output;
	cout << output; */
	file.close();
	
	//system("pause");
	return 0;
}