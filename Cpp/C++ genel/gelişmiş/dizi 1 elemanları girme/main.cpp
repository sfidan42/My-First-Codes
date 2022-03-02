#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;
int main()
{
  int N;
  cout << "input array size: ";
  cin >>N;
  int n[N];

  for(int i=0;i<N;i++)
  {

      cin >> n[i];
      cout << i << ". element is "<<n[i];
      cout << endl;
  }
    return 0;
}
