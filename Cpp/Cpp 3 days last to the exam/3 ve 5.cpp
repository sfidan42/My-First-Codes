#include<iostream>
using namespace std;










bool	ucbes(int sayi)
{
	if(sayi % 5 == 0 || sayi %3 ==0)
		return (true);
	else
		return (false);
}














int main()
{
	int	sayilar[10] = {4, 21, 2,4 ,4 ,52,35,3 ,5,16};
	
	for(int i=0;i<10;i++)
	{
	
	
		if (    ucbes(sayilar[i])   )
		
	  		cout << sayilar[i] << " , 3 ün veya 5 in katıdır" << endl;
	  
		else
		
	  		cout << sayilar[i] << " , 3 ün veya 5 in katı değil" << endl;
	
	}
}
