#include<stdio.h>
#include<conio.h>
int devine(int m,int n);
int main(){
int a,b,result,result1,count=1;
printf("input divison number");
scanf("%d\n%d",&a,&b);
devine(a,b);
}
int devine(int m,int n){

int result,result1,count=0;
result=m/n;
printf("result %d",result);
result1=m-n;
while(result1!=0){
result1=result1-n;
count++;
 }
 printf("\ncount %d",count);
}
