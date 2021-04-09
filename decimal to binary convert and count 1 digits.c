#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i=0;
scanf("%d",&a);
while(a!=0){

  b=a%2;
  a=a/2;
  if(b==1){
   i++;
   }
 }
 printf("set bit=%d",i);
return 0;
}
