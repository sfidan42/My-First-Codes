#include <iostream>
using namespace std;

int main ( )
{
int S;
cout<<"Sayi giriniz: ";
cin>>S;
    if (S%2==0)
        cout<<"Cift";

    else
        cout<<"Tek";
        cout<<endl;
    while(S){

            cout<<"Yeni sayi giriniz: ";
            cin>>S;
        if (S%2==0)
            cout<<"Bu sayi cift"<<endl;

        else
            cout<<"Bu sayi tek"<<endl;
}
    return 0;
}
