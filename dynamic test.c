#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,i,n,j;
printf("langth size");
scanf("%d",&n);
 ptr=malloc(n*4);

 for(i=0;i<n;i++){
  scanf("%d",&ptr[i]);
  printf("%d",ptr[i]);
 }
 return 0;
}
