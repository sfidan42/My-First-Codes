#include<iostream>
using namespace std;
int main()
{
	int n;
	int t = 0;

	cout << "please input a number to learn which numbers are smaller than that your input number and can divide by 15: " << endl;
	cin >> n;

	for (int num = 0; num <= n; num++)
	{
		t++;
		if (num % 3 == 0 && num % 5 == 0)
		{
			cout << "number " << t << " is " << num << endl;
		}
	}
	return 0;
}












//#include <iostream>
//using namespace std;
//void result(int n)
//{
//    for (int num = 0; num < n; num++)
//    {
//        if (num % 3 == 0 && num % 5 == 0)
//            cout << num << " ";
//
//    }
//}
//int main()
//{
//    int n;
//    cout << "input an integer: ";
//    cin >> n;
//    result(n);
//    return 0;
//}
