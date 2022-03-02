#include <iostream>

using namespace std;
int main()
{

	int x, y, carpim = 0;
	cout << " please input two numbers: " << endl;
	cin >> x >> y;
	for (int i = 1; i <= y; i++)
	{
		carpim += x;
	}
	cout << carpim;

	return 0;
}