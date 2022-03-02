#include <iostream>

using namespace std;

int main()
{char c[]= "metinnnnmm",check= 'm';
int count =0;
for(int i=0;c[i] != '\0';i++)
{
    if(check==c[i])
    {
        count++;
    }
}


cout<< "frequency of "<<check<< " = "<<count;
return 0;
}
