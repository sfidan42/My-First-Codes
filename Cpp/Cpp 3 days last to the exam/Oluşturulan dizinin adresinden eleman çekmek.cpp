#include <iostream>
using namespace std;
int main()
{
	int* x;
	int* y;
	int* z;

	int arr[5] = { 1,2,3,4,5 };

	x = arr;
	y = arr;
	z = arr;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	cout << endl;

	cout << *x << endl;
	cout << *y << endl;
	cout << *z << endl;

	cout << endl;

	cout << *(x + 1) << endl;
	cout << *(y + 1) << endl;
	cout << *(z + 1) << endl;

	return 0;
}