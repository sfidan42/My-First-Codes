#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;

int main()
{
	int N;
	int n[1000];
	cout << "Please input the Array size: " << endl;
	cin >> N;
	for (int i = 0; i < N; i++)
	{ 
		cout << "please input " << (i + 1) << ". element:";
		cin >> n[i];
		cout << i + 1 << ". element: " << n[i] << endl;
		
	}
	cout << endl << endl;
	cout << "Array" << setw(13) << "value" << endl;
	
	for (int j = 0; j < N; j++)
	{
		
		cout << setw(4) << j << setw(14) << n[j] << endl;
	}
	return 0;
}

