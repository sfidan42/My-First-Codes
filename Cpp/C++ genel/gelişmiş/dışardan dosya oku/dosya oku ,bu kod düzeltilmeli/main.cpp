#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ifstream dosyaOku  ("dosya.text");
char  karakter;
if (dosyaOku.is_open()){
    while (dosyaOku.get(karakter)){
        cout<<karakter;
    }
    dosyaOku.close();
}
}
