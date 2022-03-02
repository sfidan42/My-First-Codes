#include <stdio.h>
void main(){
	double n1,n2,n3;
	printf("Enter 3 doubles:");
	scanf("%lf%lf%lf",&n1,&n2,&n3);
	printf("the greatest:%lf",(n1>n2)?((n1>n3)?n1:n3):n2);//should change, it is better using usual if else if else.
}
