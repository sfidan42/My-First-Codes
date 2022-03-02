#include <iostream>

using namespace std;

int main()
{
int x=15;
int *p=&x;
cout<<"p..:"<<p<<endl;
cout<<"&x..:"<<&x<<endl;
cout<<"p..:"<<*p<<endl;
cout<<"x..:"<<x<<endl;
*p=200;
cout<<endl<<"degisimden sonra"<<endl;
cout<<"p..:"<<p<<endl;
cout<<"&x..:"<<&x<<endl;
cout<<"p..:"<<*p<<endl;
cout<<"x..:"<<x<<endl;
    return 0;
}
