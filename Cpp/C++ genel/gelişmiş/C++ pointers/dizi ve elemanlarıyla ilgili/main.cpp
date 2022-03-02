#include <iostream>

using namespace std;

int main()
{
int arr[4]={1,2,3,4};
int *ptr;
ptr=arr;

for(int i = 0;i<7;i++)
    cout<< *(ptr+i)<<endl;

    return 0;
}
