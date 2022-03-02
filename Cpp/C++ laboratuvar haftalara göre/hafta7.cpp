
#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;
int main()
{
    int N;
    cout << "input array size: ";
    cin>>N;

    int n[N];
    for(int i=0;i<N;i++)
    {
cin>>n[i];
        cout<< i<< ". element is: "<<n[i]<<endl;

    }
cout<< "element"<<setw(13)<< "value"<<endl;
for(int j=0;j<N;j++)
{
    cout<<setw(7)<<j<<setw(13)<<n[j]<<endl;
}
    return 0;
}
