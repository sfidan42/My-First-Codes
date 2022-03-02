#include <iostream>

using namespace std;

int main()
{
    int i,n,factorial=1;

    cout<< "enter a positive integer:"<<endl;
    cin >>n;
if (n>=0)
   {

    for (i=1;i<=n;i++)
    {

    factorial *=i;
    }

    cout<< "factorial of "<<n<< " = "<<factorial;
   }
else
{
    cout << "please enter positive number!";
}

    return 0;
}
