#include<stdio.h>
#include<conio.h>
int main(){

int c,r,i,j,k,sum=0;
printf("enter the array row size= ");
scanf("%d",&r);
printf("enter the array colume size= ");
scanf("%d",&c);

 int a[c][r],b[c][r],s[c][r];

 printf("enter the array value a=");
  for(i=0;i<c;i++){
   for(j=0;j<r;j++){
    scanf("%d",&a[i][j]);

    }
   }

 printf("insert array value b=");
  for(i=0;i<c;i++){
   for(j=0;j<r;j++){
    scanf("%d ",&b[i][j]);
     }
  }


 printf(" array value sum  = ");
  for(i=0;i<c;i++){
   for(j=0;j<r;j++){
    for(k=0;k<r;k++){

       sum=sum+a[i][k]*b[k][j];

      }
      s[i][j]=sum;
     }
  }
 for(i=0;i<c;i++){
   for(j=0;j<r;j++){
    printf("%d",s[i][j]);
     }
   printf("\n");

  }
}
