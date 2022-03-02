#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
	// Kullanýcýnýn girdiði 2 sayý arasýndaki asal sayýlarý bulacaðýz.
	int sayac1=0,sayac2=0;

	for(int i=2;i<=100;i++)
	{
		sayac1=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				sayac1++;
				break;
			}
		}
		if(sayac1==0)
		{
			cout<<i<<" ";
			sayac2++;
		}
	}
	cout<<endl;
	cout<<"1-100 arasý Toplam "<<sayac2<<" adet asal sayý var.";
}
