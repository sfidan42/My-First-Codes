#include <iostream>
using namespace std;
int main()
{
	int x, y, rows;
	cout << "please input an integer: ";
	cin >> rows;
		for (x = 1; x <= rows; x++)
		{
			for (y = 1; y <= x; y++)
			{
				cout << y <<" ";

			}
			cout<<endl;
		}
	return 0;
}