#include<stdio.h>
#include<conio.h>
int main(){
int x,y,z,n;

scanf("%d",&n);

for(x=1;x<=n;x++){

   for(y=x;y<n;y++){
     printf(" ");
   }

   for(y=1;y<=(2*x-1);y++){
    printf("*");
    }
 printf("\n");
 }
 return 0;
 }
