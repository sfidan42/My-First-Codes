#include <iostream>

using namespace std;
int func(int a);
int main()
{
    int n;
  cout << "bir sayi girniz;";
  cin  >> n;
  func(n);
  return 0;
}
int func( int a)
{
    int n=0;
    for (int x; x>=0 && x<=n; x++){
   if(x%3==0 && x%5==0)
{
    cout << x;
}
else
{
break;
}
}
    return a;
}

