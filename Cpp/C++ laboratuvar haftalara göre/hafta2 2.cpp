#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main()
{
   int num1,num2,num3;
   cout<< "enter value for first number"<< endl;
   cin>>num1;
   cout<< "enter value for second number"<< endl;

   cin>>num2;
   cout<< "enter value for third number"<<endl;
   cin>>num3;

if (num1>num2&&num1>num3)
{
   cout<< "first number is greatest:"<< endl << "it is=" << num1;
}
else if (num2>num1&&num2>num3)
{
    cout <<"second number is greatest:"<< endl<< "it is="<< num2;
}
else
{
       cout << "third number is greatest:"<< endl<< "it is="<< num3;
}

   return 0;

}
