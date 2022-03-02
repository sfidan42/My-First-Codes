#include <iostream>

using namespace std;

int main()
{
  int i;
  int f;
    int number;
  cout<<"please enter a integer: "<<endl;
  cin>>number;
  f=0;
  i=2;
  while (i <= number/2)
  {
      if (number % i == 0)
      {
          f=1;
          break;
      }
      i++;
  }
  if (f==0)
    cout << number << " is a prime number."<< endl;
  else
    cout << number << " is not prime number."<<endl;
    return 0;
}
