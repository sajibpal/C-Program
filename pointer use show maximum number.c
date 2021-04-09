#include<stdio.h>
#include<conio.h>
int main(){
int x,y,*a,*b;
printf("enter the frist number =");
scanf("%d",&x);
printf("enter the secound number =");
scanf("%d",&y);
a=&x;
b=&y;
if(*a>*b){
 printf("maximum value %d",*a);
 }
else{
 printf("maximum value %d ",*b);
 }
 return 0;
}
