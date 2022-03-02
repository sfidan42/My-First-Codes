#include <iostream>

using namespace std;

int main()
{
  /*break: döngüdeki break deyimi çalýþtýrýldýðý
  zaman döngünün dýþýna yallah
  continue: dögüde bu deyim çalýþtýrýldýðý zaman
   kod çalýþtýrmadan baþa döer */
   int i=0;
   while(i<10)
   {
       if(i==5)
       {
           break;
       }
       cout<< " i: "<<i<<endl;
       i++;
   }
    return 0;
}
