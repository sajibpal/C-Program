#include<stdio.h>
#include<conio.h>
int main(){
int m,n;
printf("enter array row size=");
scanf("%d",&n);
printf("enter array colume size=");
scanf("%d",&m);

 int array[m][n],c,r,test=0;

  for(c=0;c<m;c++){
    for(r=0;r<n;r++){
     scanf("%d",&array[c][r]);
     }
   }

   printf("the transport array\n");
     for(c=0;c<m;c++){
      for(r=0;r<n;r++){
        printf("%d ",array[r][c]);
          if(array[c][r]==array[r][c]){
            test=1;
           }
         }
          printf("\n");
      }

   if(test==1){
    printf("this is symmtic");
    }
   else{
    printf(" this not symmtic");
    }
}
