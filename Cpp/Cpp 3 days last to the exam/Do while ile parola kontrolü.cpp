#include<iostream>
using namespace std;
int main()
{
	
	int passcode = 123;
	int input;
	int i = 0;
	do
	{
		
		cout << "Please input the passcode: ";
		cin >> input;
		if (input != passcode)
		{
			cout << " passcode is wrong! " << endl;

		}
		else i++;

	
	} while (input != passcode);
	if (i == 0)
	{
		cout << "you have a good memory maan.";
	}

	cout << "Passcode is true! ";
	return 0;
}