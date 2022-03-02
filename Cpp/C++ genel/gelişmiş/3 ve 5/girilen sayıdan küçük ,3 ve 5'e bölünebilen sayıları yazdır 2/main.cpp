#include <iostream>

using namespace std;
void result (int N);
int main()
{
int N;
cout<< "bir sayi giriniz";
cin>> N;
result(N);
return 0;


}
void result (int N)
{
    for(int num=0; num < N; num ++)
    {
        if (num %3==0&& num %5==0)
            cout << num << " ";
    }
}
