#include <iostream>
#include<fstream>//dosya okuma ve yazma kütüphanesi
using namespace std;

int main()
{
    int i,sayi,toplam=0;//deðiþkenler tanýmlýyoruz
    ofstream yaz;//dosyayý yazmak için ofstream output
    ifstream oku;//dosyadan okumak için input
    oku.open("dosya.txt");//veri.txt klasörünü oku denklasyonu
    for(int i=0;i<5;i++)//klasördeki ilk 10 sayýyý sýrala
    {
        oku>>sayi;//sayýlarý oku
        toplam+=sayi;//okuduðun sayýlarý topla
    }
    oku.close ();//dosyayý kapat
    yaz.open("sonuc.txt");//sonuc.txt adýnda dosya aç
    yaz<<"Toplam="<<toplam;//ve toplamý sonuç dosyasýna yazdýrýyor
    cout<<"toplam="<<toplam;
    yaz.close();
    return 0;
}
