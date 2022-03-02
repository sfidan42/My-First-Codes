#include <iostream>

using namespace std;
int ortValue(int n, int m,int k);//function prototype
int main()
{
int x,y,z,ans;
cout<<"input x,y,z; ";
cin>> x>>y>>z;
ans = ortValue(x,y,z); // function is called
cout <<"answer is:"<< ans<<endl;
return 0;
}

int ortValue(int n ,int m,int k)
{
    int result;
        if((n>m && m>k)||(k>m && m>n))
        {
        result = m;
        }
        else if((m>n && n>k)||(k>n && n>m) )
        {
        result = n;
        }
        else
        {
            result =k;
        }
    return result;
}
