#include<stdio.h>
#include<conio.h>
int main(){
 int i, n,f1=0,f2=1,f;  //1 1 2 3 5 8 13 21
 printf("enter the value  of size");
 scanf("%d",&n);
  for(i=0;i<n;i++){
    f=f1+f2;
     printf("%d ",f);
     f2=f1;
      f1=f;
    }
 return 0;
}
