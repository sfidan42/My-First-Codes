#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,sayi,toplam=0;
    ofstream yaz;
    ifstream oku;
    oku.open("veri.txt");
    for(int i=0;i<5;i++)
    {
        oku>>sayi;
        toplam=toplam+sayi;
    }
    oku.close();
    yaz.open("sonuc.txt");
    yaz<< "toplam="<<toplam;
    cout<< "toplam="<<toplam;
    yaz.close();

    return 0;

}
