#include<iostream>
#include<iomanip>

using namespace std;

const int ROW = 3; //Could have multiple 2D arrays with different rows but same number of columns.
const int COL = 3; //C++ must know the number of columns in a 2D array for use in function calls and prototypes.

void setData(double[][COL], int);
void getData(double[][COL], int);
double getTotal(double[][COL], int);

int main()
{
	double testData[ROW][COL];
	double total = 0;
	
	setData(testData, ROW);
	getData(testData, ROW);
	total = getTotal(testData, ROW);
	
	cout << fixed << showpoint << setprecision(2);
	cout << total;
}

void setData(double arr[][COL], int row)
{
	for(int r = 0; r < row; r++)
	{
		for(int c = 0; c < COL; c++)
		{
			cout << "Enter value: " << c+1 << " for test: " << r+1 << endl;
			cin >> arr[r][c];
		}
	}
}

void getData(double arr[][COL], int row)
{
	for(int r = 0; r < row; r++)
	{
		for(int c = 0; c < COL; c++)
		{
			cout << arr[r][c] << " ";
		}
		cout << endl;
	}
}

double getTotal(double arr[][COL], int row)
{
	double total = 0;
	for(int r = 0; r < row; r++)
	{
		for(int c = 0; c < COL; c++)
			total += arr[r][c];
	}
	return total;
}