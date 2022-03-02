#include <iostream>
using namespace std;
int main()
{
	int x,n=1;
	cout << "please input an integer: " << endl;
	cin >> x;
	if (x < 0)
	{
		cout << "please input a positive integer: ";
	}
	else
		for (int i = 1; i <= x; i++)
		{
			n = n * i;
		}
	cout << "faktoriel result is:   "<< n;
	return 0;
}
