#include<iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
main() {

       int i,j;

       int boyut=12;

       int adet=0;

       int ortaBosluk=3;

       for(i=0;i<7;i++) {
       boyut/=2;
       if(i==0 || i==4 || i==5)
       adet=1;
       else if(i==1 || i==10)
       adet=7;
       else
       adet=2;

       for(j=0;j<boyut;j++) // distaki bosluk icin
       cout<<" ";
       for(int k=0;k<adet;k++)
       cout<<"*";
       if(i!=1 && i!=0) {
       for(int l=0;l<ortaBosluk;l++)
       cout<<" ";
       for(int k=0;k<adet;k++)
       cout<<"*";
       }
       cout<<"\n";
       if(i<3)
       ortaBosluk+=2;
       else if(i==5)
       ortaBosluk=9;
       else
       ortaBosluk=11;
       }

       getch();
       return 0;
       }
