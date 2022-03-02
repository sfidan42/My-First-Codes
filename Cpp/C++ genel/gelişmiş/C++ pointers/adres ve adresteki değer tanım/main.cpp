#include <iostream>

using namespace std;

int main()
{
    int sayi;
    sayi=10;

    cout<< "sayi: "<<sayi<<endl;
    cout<< "sayi adresi : "<< &sayi<<endl;

    int *sayiPtr;
    sayiPtr = &sayi;
    cout <<"sayiPtr: "<< sayiPtr<<endl;
    cout <<"*sayiPtr= "<<*sayiPtr<<endl;



    return 0;
}
