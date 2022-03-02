#include <iostream>
using namespace std;
int main()
{
    int first_number, second_number, GCD;
    
    cout << "please input two integers: " << endl;
    cin >> first_number >> second_number;
    
    for (int i = 1; i <= first_number && i <= second_number; i++)
    {
        if (first_number % i == 0 && second_number % i == 0)
            GCD = i;
    }
    
    cout << "Greatest common division is " << GCD;

 return 0;
}