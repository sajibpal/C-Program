#include<stdio.h>
#include<conio.h>
int countdigits(int n);
int main(){
int n;
printf("enter the value of number = ");
scanf("%d",&n);
countdigits(n);
return 0;
}
int countdigits(int n){
 if(n<0){
 printf("this is error");
  }
 int a,count=0;
while(n!=0&&n>=0){
   a=n%10;
   n=n/10;

   switch(a){

    case 0:
     count++;
     break;

    case 1:
     count++;
     break;

    case 2:
     count++;
     break;

    case 3:
     count++;
     break;

    case 4:
     count++;
     break;

    case 5:
     count++;
     break;

    case 6:
     count++;
     break;

    case 7:
     count++;
     break;

    case 8:
     count++;
     break;

    case 9:
     count++;
     break;

   }

 }
  printf("%d",count);
  return 0;
}

