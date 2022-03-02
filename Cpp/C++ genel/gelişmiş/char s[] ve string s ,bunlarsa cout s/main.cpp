#include <iostream>

using namespace std;
void display (char *);
void display(string);
int main()
{
string strl;
char str[100];
cout<<"enter a string: ";
getline(cin,strl);
cout<<"enter another string: ";
cin.get(str,100,'\n');
display(strl);
display(str);
return 0;
}
void display (char s[])
{
    cout<<"entered char arrayk is: "<<s<<endl;
}
void display (string s)
{
    cout <<"entered string is: "<<s <<endl;
}
