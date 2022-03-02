#include<iostream>

using namespace std;

int main()
{
	int x, y, z;
	cout << "please input 3 numbers to find mid : ";
	cout << endl << endl << endl;
	cout << " input first number :  ";
	cin >> x;
	cout << endl;
	cout << " input second number:  ";
	cin >> y;
	cout << endl;
	cout << " input third number :  ";
	cin >> z;
	cout << endl;
	if ((y < x && x < z) || (z < x && x < y))
		cout << "x is mid";
	else if ((x < y && y < z) || (z < y && y < x))
		cout << "y is mid";
	else
		cout << "z is mid";
	return 0;

}