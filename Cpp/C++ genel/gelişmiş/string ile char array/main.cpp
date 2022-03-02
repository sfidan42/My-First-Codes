#include <iostream>

using namespace std;

int main()
{
  char line[100]; // defining of array has 100 elements
  char alphabetString[100]={'\0'}; // defining of array has 100 elements

  int j=0;

  cout<< "enter a string :   ";
  cin.getline(line,100);

  for(int i=0 ; line[i]!= '\0' ; ++i)
  {
      if((line[i]>='a' && line[i]<='z')||(line[i]>='A'&& line[i] <='Z'))
      {
        alphabetString[j++]=line[i];
      }

  }

   cout << "your input is: " << alphabetString ;
   alphabetString[j]='\0';


return 0;
}
