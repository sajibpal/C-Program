#include<stdio.h>
#include<conio.h>
int main(){
 int *a[15],b[10],n,i,j,temp;
 printf("enter the value of array size = ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 printf("enter array element a[%d]=",i);
  scanf("%d",&b[i]);
  a[i]=&b[i];
  }
  for(j=0;j<n-1;j++){
   for(i=j+1;i<n;i++){
   if(*a[j]> *a[i]){
    temp=*a[j];
    *a[j]=*a[i];
    *a[i]=temp;

     }
      }
       }
       for(i=0;i<n;i++){
       printf("array element%d\n",*a[i]);
         }
return 0;
}

