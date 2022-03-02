#include <iostream>
using namespace std;
void result(int n)
{
    for(int num=0;num<n;num++)
    {
        if(num%3==0&&num%5==0)
            cout<<num<< " ";

    }
}
int main()
{
    int n;
    cout<< "input an integer: ";
    cin>>n;
    result(n);
    return 0;
}
