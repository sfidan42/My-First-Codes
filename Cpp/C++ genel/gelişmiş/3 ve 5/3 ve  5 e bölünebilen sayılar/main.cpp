#include <iostream>

using namespace std;
void result (int N);
int main()
{
int a,sayac;
cout<< "bir sayi giriniz:";
cin>> a;
result(a);
return 0;


}
void result (int N)
{
cout<< "3 ve 5 e bolunen sayılar"<<endl;
    for(int num=1; num < N; num ++)
    {
int x=0;
        if (num %3==0&& num %5==0)
          {
              cout << num  << " ";
        x=x+num;
        }


    }
cout<<endl;
cout<< "3 ve 5 e bolunen sayıların toplamı"<< num;
}
