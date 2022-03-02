//ofstream:cout
//ifstream:cin

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	/*ofstream dosyaya_yaz;
	dosyaya_yaz.open("Yeni bir dosyaaaaaaaaa.txt"/* ,ios.app )*//*;
	/*dosyaya_yaz << "İşte yazıyorummmm.";
	dosyaya_yaz.close();*/

	ifstream dosyayi_oku;
	dosyayi_oku.open("Yeni bir dosyaaaaaaaaa.txt");
	char n;
	while (!dosyayi_oku.eof())
	{
		dosyayi_oku >> n;
		cout << n;
	}
}