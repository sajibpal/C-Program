#include<stdio.h>
#include<conio.h>
int main(){

 int hour,minits,totalminits,a;

  printf(" hour=\n minits=\n");
  scanf("%d%d",&hour,&minits);
  a=hour*60;
  totalminits=a+minits;
  printf(" totalminits=%d",totalminits);

 return(0);
 }
