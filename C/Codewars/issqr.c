/*
 * tam kare kontrolü
 */
#include <stdbool.h>
#include <math.h> 
#include <stdio.h>


bool is_square(int n) {
    int s = sqrt(n);
    return n == s * s;
}
#include <math.h>

bool is_square2(int n)
{
    double unused;
    return modf(sqrt(n), &unused) == 0;
}

#define formatBool(b) ((b) ? "true" : "false")
void main() {
    char arr[]={2,3,9,-1};
    for(int i=0;i<4;i++){
        printf("element f1:%d\t%s\n" , arr[i] , formatBool(is_square(arr[i])) );
        printf("element f2: %d\t%s\n" , arr[i] , formatBool(is_square2(arr[i])) );
    }
}
