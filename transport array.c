#include<stdio.h>
#include<conio.h>
int main(){
int m,n;
printf("enter array row size=");
scanf("%d",&n);
printf("enter array colume size=");
scanf("%d",&m);

 int a[m][n],c,r;
  for(c=0;c<m;c++){
    for(r=0;r<n;r++){
        scanf("%d",&a[c][r]);
      }
    }

     printf("this is transmitted\n");
      for(c=0;c<m;c++){
        for(r=0;r<n;r++){
        printf("%d",a[r][c]);
         }
          printf("\n");
       }




}
