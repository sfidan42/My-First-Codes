#include <iostream>

using namespace std;

int main()
{
    int number,i,f;
   cout<< "enter any number:";
   cin>> number;

    f=0;
    while(i <=number /2)
    {
        if (number % i ==0)
        {
            f=1;

            break;
        }
i++;
}
if(f==0)

    cout<< number << " is a prime number"<<endl;
else
    cout<< number << " is  not  a prime number"<<endl;

    return 0;
}
