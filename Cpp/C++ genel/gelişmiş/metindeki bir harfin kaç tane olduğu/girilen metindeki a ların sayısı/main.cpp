#include <iostream>

using namespace std;

int main()
{
    string x;
    cout << "bosluk koymadan bir metin giriniz(a'larin sayisi icin):";
    cin >> x;
string str=x;
char checkCharacter='a';
int count=0;
for (int i=0;i<str.size(); i++){
    if (str[i]== checkCharacter)
{
    ++count;
}
}
cout << "number of "<< checkCharacter<<" = "<<count;
return 0;
}
