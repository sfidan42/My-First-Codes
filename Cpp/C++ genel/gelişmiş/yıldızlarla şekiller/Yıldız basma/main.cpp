#include<iostream>
using namespace std;
int main() {

    int i,j;
    for(i=0;i<3;i++) {
    for(int k=0;k<2-i;k++)
   cout<<" ";
    for(j=0;j<2*i+1;j++) {
    cout<<"X";
}
   cout<<"\n";
}
for(i=1;i>=0;i--) { // algoritmanýn tersten iþleme mantýgý burada baslamaktadýr
for(int k=1-i;k>=0;k--)
cout<<" ";
for(j=2*i;j>=0;j--)
cout<<"X";
cout<<"\n";
}
return 0;
}
