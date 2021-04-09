#include<stdio.h>
#include<conio.h>
int countdigits(int array[],int len );
int main(){
int a[10]={'\0'},i,n;
printf("enter the value of number array size = ");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
countdigits(a,n);
return 0;
}
int countdigits(int array[],int len){
  int j,count=0;
  for(j=0;j<len;j++){
   if(array[j]<0){
   printf("this is error");
    break;
    }
    else if(array[j]>=0){
     count++;
     }
  }
printf("\n%d",count);
  return 0;
}

