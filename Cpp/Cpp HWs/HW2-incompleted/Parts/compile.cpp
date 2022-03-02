#include <iostream>
#include <fstream>
#include <array>
#include <string>
using namespace std;
int main ()
{
    int i =0;
    array<string,2> a;
    ifstream file(".inp");
    string str;
    while (getline(file, str))
        {
        a[i]=str;
        i++;
        }
return 0;
}
