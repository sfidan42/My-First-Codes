#include <stdio.h>
void main() {
	int n1,n2;
	printf("Two integers:");
	scanf("%d%d",&n1,&n2);
	if(n2!=0){printf("num1/num2 no cast: %lf",(double)n1/n2);}
}
