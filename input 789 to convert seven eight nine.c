#include<stdio.h>
#include<conio.h>
int main(){
int a,b,temp=0,c;
scanf("%d",&a);

while(a!=0){
b=a%10;
a=a/10;
temp=temp*10+b;
}
c=temp;
while(c!=0){
b=c%10;
c=c/10;

switch(b){

  case 1:
  printf("one ");
  break;

  case 2:
  printf("two ");
  break;

   case 3:
  printf("three ");
  break;


   case 4:
  printf("four ");
  break;



   case 5:
  printf("five ");
  break;


   case 6:
  printf("six ");

  break;


   case 7:
  printf("seven ");
  break;


    case 8:
  printf("eight ");
  break;


  case 9:
  printf("nine ");
  break;


  default:
  printf("no number ");
  break;

   }
  }


  return 0;

 }
