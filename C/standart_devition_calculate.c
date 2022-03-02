#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sum=0;
int count=0;
double avr;
int i;

int main(void){

	while (true){
		  double inp=scanf("Please a enter a num(double) to calculate s.d. with previous numbers)");
		  if(inp==NULL){break;}
		  
		  sum+=inp;
		  count++;
		  double a[count];
		  a[-1]=inp;

		  avr=sum/count;

		  double b[count];
		  double subs_sum=0;

		  for (i=0;i<count;i++){
		    subs_sum+=abs(a[i]-avr);
		  }

		  double std=subs_sum/(count-1);
		  printf("The standart deviation is equal to: ",std);
	}

 return EXIT_SUCCESS;
}
