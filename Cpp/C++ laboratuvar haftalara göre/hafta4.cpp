#include <iostream>

using namespace std;
int main()
{
int parola= 1212;
int input;
do {
    cout<<"parola giriniz:";
    cin>> input;

  if(input != parola)
{
    cout<< "parolayi yanlis girdiniz"<<endl;
}
}
while(input != parola);

 cout<< "parolayi dogru girdiniz...";

        return 0;
}





