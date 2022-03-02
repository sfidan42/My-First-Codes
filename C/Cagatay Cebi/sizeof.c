#include<stdio.h>
#include<limits.h>
#include<float.h>
int main( void )
{	
	printf( "\nTIP\t\t  BOYUT\t\t MIN\t \tMAX\n" );
	printf("==============================================================\n");
	printf( "char\t\t: %lu byte(s)\t%d\t\t%d\n", sizeof(char),CHAR_MIN,CHAR_MAX );
	printf( "short\t\t: %lu byte(s)\t%d\t\t%d\n", sizeof(short), SHRT_MIN, SHRT_MAX );
	printf( "int\t\t: %lu byte(s)\t%d\t%d\n", sizeof(int), INT_MIN, INT_MAX );
	printf( "unsigned int\t: %lu byte(s)\t\t\t%u\n",sizeof(unsigned),UINT_MAX );
	printf( "long\t\t: %lu byte(s)\t%ld\t%ld\n", sizeof(long), LONG_MIN, LONG_MAX );
	printf( "float\t\t: %lu byte(s)\t%e\t%e\n", sizeof(float), FLT_MIN, FLT_MAX );
	printf( "double\t\t: %lu byte(s)\t%e\t%e\n\n", sizeof(double), DBL_MIN, DBL_MAX );

	return 0;
}
