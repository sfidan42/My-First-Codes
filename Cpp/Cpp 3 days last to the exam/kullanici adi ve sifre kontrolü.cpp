#include <iostream>
using namespace std;
int main()
{
		string kullanici_adi = "Sadettin";
		string girilen_kullanici_adi;
		string parola = "ABC123";
		string girilen_parola;
	while (1)
	{
		
		cout << "kullanici adi giriniz: ";
		cin >> girilen_kullanici_adi;
		cout << endl;
		cout << "sifre giriniz: ";
		cin >> girilen_parola;
		cout << endl;
		if (kullanici_adi == girilen_kullanici_adi && parola == girilen_parola)
			cout << "Parola dogru. Sadettin Bey ,hosgeldiniz. " << endl << endl;
		else if (kullanici_adi != girilen_kullanici_adi && parola == girilen_parola)
			cout << "Parola dogru ancak kullannici adi yanlis." << endl << endl;
		else if (kullanici_adi == girilen_kullanici_adi && parola != girilen_parola)
			cout << "Kullanici  adi dogru ancak parola yanlis." << endl << endl;
		else
			cout << "Kullanici adi ve parola yanlis" << endl << endl;
	}
	return 0;
}

