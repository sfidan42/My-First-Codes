#include <iostream>

using namespace std;

int main()
{
    int sayi1;
    cout << "bir sayi giriniz: "<<endl;
    cin >> sayi1;
    int sayac = 2;
    while(sayac < sayi1)
    {
        if(sayi1 % sayac == 0)
        {
            cout<< "sayi asal degil."<<endl;
            break;
        }
        sayac += 1;

    }
    if(sayac == sayi1)
    {
        cout << " sayi asaldir."<<endl;
    }

    return 0;
}
