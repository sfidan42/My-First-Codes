#include <iostream>

using namespace std;

int main()
{
    char line [150];
    int vowels, consonants ,digits,spaces;
    vowels= consonants =digits=spaces=0;
    cout<<"enter a line of string: ";
    cin.getline(line,150);
    for(int i=0; line[i]!= '0';++i)
    {
        if(line[i]=='a'||line[i]=='e'||
           line[i]=='i'||
           line[i]=='o'||
           line[i]=='u'||
           line[i]=='A'||
           line[i]=='E'||
           line[i]=='I'||
           line[i]=='O'||
           line[i]=='U')
    {++vowels;}
        else if ((line[i]>='a'&& line[i]<='z')||(line[i]>='A'&& line[i]<='Z'))
    {++consonants;}
        else if(line[i]>='0'&& line[i]<='9')
     {++digits;}
        else if(line[i]=='(sp)')
    {++spaces;}

    }
    cout<<endl;
    cout<< "iþte bunlar adedleri: "<<endl;
    cout<<" sesli harflerin adedi: "<<vowels;
     cout<<"bosluklarin adedi: "<<spaces;
      cout<<"rakamlarin adedi: "<<digits;
       cout<<"harflerin adedi: "<<consonants;

    return 0;
}
