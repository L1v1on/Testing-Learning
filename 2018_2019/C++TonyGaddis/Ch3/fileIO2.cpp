#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	fstream file("C:\\Users\\3zr4\\Desktop\\Testing-Learning\\2018\\C++TonyGaddis\\Ch3\\fruit.txt");
	char output[20];
	
	cout << "Reading from file.\n";
	// read a stream size of 20 characters into output or until a newline character is read
	file.getline(output,20,'\n');
	//file >> output; * reads up to the first whitespace 
	cout << output << endl;
	system("pause");
	file.close();
	return 0;
}