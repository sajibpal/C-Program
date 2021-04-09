#include<stdio.h>
#include<conio.h>
int main(){
int m,n;
printf("enter array row size=");
scanf("%d",&n);
printf("enter array colume size=");
scanf("%d",&m);

 int a[m][n],c,r,test;
  for(c=0;c<m;c++){
    for(r=0;r<n;r++){
        scanf("%d",&a[c][r]);
      }
    }
     for(c=0;c<m;c++)
       for(r=0;r<n;r++)
        if(a[c+1][r]==0&&a[c+2][r]==0&&a[c+2][r+1]==0){
           test=1;
             }




    if(test==1){
      printf("this is upper triangular");
      }

    else{
    printf("this is not upper triangular");
    }

}




