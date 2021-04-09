#include<stdio.h>
#include<conio.h>
int main(){
int x,y,z,n;

printf("enter the patten size =");
scanf("%d",&n);

for(x=1;x<=n;x++){

  for(y=1;y<=n-x;y++){  //for(y=1;y<=x;y++)
     printf("%d",y);
   }

 printf("\n");
 }
 return 0;
 }
