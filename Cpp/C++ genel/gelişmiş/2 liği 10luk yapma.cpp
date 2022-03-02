#include<iostream>
#include<cmath>// pow fonksiyonunu kullanmak için cmath kütüphanesini  ekledik.
using namespace std;

int ikiligionlugacevir(int sayi)//ikiligionlugacevir fonksiyonunun içine 2 tabanýndaki
                                //sayýyý 10'luk tabana çevirme iþlemini tanýtacaðýz.
{
int d=0,r,c=0,p;//d deðiþkenini 10'luk tabana çevrilmiþ haline eþitlemek için oluþturduk

while(sayi>0)//while döngüsü içine sayi>0 olduk çünkü taban aritmetiði pozitif sayýlar için geçerlidir
{
r = sayi%10;
sayi = sayi/10;
p = pow(2,c);//2'lik tabandaki sayýnýn her basamaðýný 10'luk tabana çevirmek için pow kullandýk
d = d + (r*p);//0.us olan d'ye r yani sayi'nýn mod 10'dan kalaný ile  her basamaðýn 10'luk tabana
                //çevrilmiþiyle toplamýnýn çarpýmýna eþitledik
c++;
}
cout<<"ikilik sayinin onluk karsiligi:"<<d;}//2'lik tabandaki sayýnýn deðeri 10'luk
                                            //tabana çevrilmiþ halini yazdrdýk.

int main(){
    int x;
    cout<<"ikilik sayiyi giriniz=";// x deðiþkenini ikiligionlugacevir fonksiyonuna gönderiyoruz aþaðýda

cin>>x;
ikiligionlugacevir(x);//ikiligionlugacevir fonksiyonunda sayi deðiþkenine x'i atadýk baþka birþey de yazabilirdik
                      //fakat üstte ikilik sayýyý x deðiþkeninde cin ile aldýðýmýz için
                      // x deðiþkenini çaðýrdýk fonksiyonda.
return 0;
}
