#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
cout<< "bir n sayisi giriniz: ";
cin>> n;
cout<<"iste n'den kucuk asal sayilar: "<<endl;
    for(i=2;i<n;i++){
        for(j=2;j<=(i/j);j++)
            if(!(i%j))break;//if factor found , not prime
        if(j>(i/j))cout<<i<<endl;;
    }

    return 0;
}
