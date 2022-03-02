#include <iostream>
using namespace std;
int main()
{
 string sys_username = "ali";
 string sys_password = "123";
 string username ;
 string password;

 while(1)
 {
     cout << " kullanici adi: ";
     cin >> username ;
     cout <<"parola ";
     cin >> password;
     if (username == sys_username && password == sys_password)
       {
    cout << "hosgeldiniz "<< username <<" bey"<< endl;
     break;
 }
 else if (username !=  sys_username && password == sys_password)
 {
     cout << "kullanici adi hatali "<< endl;
 }
 else if (username ==  sys_username && password != sys_password)
 {
     cout<<" parola hatali"<< endl;
 }
 else
 {
cout <<"     kullanici adi ve parola hatali"<<endl;
 }
 }
 return 0;
}

