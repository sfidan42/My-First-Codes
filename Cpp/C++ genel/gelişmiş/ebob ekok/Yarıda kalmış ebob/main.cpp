#include <iostream>

using namespace std;

int main()
{
   int num1,num2,i,ebob;
   cout<< "2 adet sayi giriniz: "<< endl;
   cin >> num1 >> num2;
   while (i <= num1 && num2)
   {
       i=2;

       if (num1 % i == 0 && num2 % i == 0)
       {
           cout << i <<endl;
       }
   }
    return 0;
}
