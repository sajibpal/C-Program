#include<stdio.h>
#include<conio.h>
int position(int n,int test);
int main(){
int number,testdigits;
printf("enter the value of number = ");
scanf("%d",&number);
printf("enter the test digits = ");
scanf("%d",&testdigits);
position(number,testdigits);
return 0;
}
int position(int n,int test){
 if(n<0){
 printf("this is error");
  }
 int a,b,count=0,temp=0;
 while(n!=0&&n>=0){
   b=n%10;
   n=n/10;
   temp=temp*10+b;
    }
  while(temp!=0){
   a=temp%10;
   temp=temp/10;

   switch(a){

    case 0:
     count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);
     }
     break;

    case 1:
     count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);
      }
     break;

    case 2:
     count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);
      }
     break;

    case 3:
     count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);
     }
     break;

    case 4:
     count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);
     }
     break;

    case 5:
     count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);
     }
     break;

    case 6:
    count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);
     }
     break;

    case 7:
     count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);}
     break;

    case 8:
    count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);
     }
     break;

    case 9:
     count++;
     if(a==test){
     printf("return 1");
     printf("\n%d",count);
     }
     break;

   default:
     printf("no error cheaking");
     break;

   }
 }
 //printf("/n this is digits poisition %d",count);
  return 0;
}

