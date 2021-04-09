#include<stdio.h>
#include<conio.h>
int main(){
 int totalnumber,months,days,year;
 printf("total number");
 scanf("%d",&totalnumber);
   year=totalnumber/365;
   days=totalnumber%365;
   months=totalnumber/30;
   printf(" year is=%d\n days is=%d\n months is =%d",year,days,months);
return(0);
}
