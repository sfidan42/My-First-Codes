#include <iostream>

using namespace std;
int MaxValue(int n, int m);//function prototype
int main()
{
int x,y,ans;
cout<<"input x,y; ";
cin>> x>>y;
ans = MaxValue(x,y); // function is called
cout <<"answer is:"<< ans<<endl;
return 0;
}

int MaxValue(int n ,int m)
{
    int result;
        if(n>m)
        {
        result = n;
        }
        else
    result = m;
    return result;
}
