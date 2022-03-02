#include <iostream>
using namespace std;
int main(){

	int sayi1,sayi2,buyukSayi;
	cout << "Sayi 1 : ";
		cin >> sayi1;
	cout << "Sayi 2 : ";
		cin >> sayi2;

	// Ýki sayýnýn EKOK'u bulunurken EKOK en fazla yine ikisinin çarpýmý olabilir.
	for(int i=1; i<=sayi1*sayi2; i++) {
		if( (i%sayi1==0) && (i%sayi2==0) ){
			cout << "EKOK: " << i;
			break;
		}
	}

	cout << endl;

	// Ýki sayýnýn EBOB'u bulunurken EBOB en fazla büyük sayý olabilir.
	if(sayi1>sayi2) {
		buyukSayi = sayi1;
	} else {
		buyukSayi = sayi2;
	}

	for(buyukSayi; buyukSayi>0; buyukSayi--) {
		if( (sayi1%buyukSayi==0) && (sayi2%buyukSayi==0) ) {
			cout << "EBOB: " << buyukSayi;
			break;
		}
	}

}
