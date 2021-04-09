#include<stdio.h>
#include<conio.h>
int main(){
    int  r,c;
    printf("Enter Your Row Limit\n");
    scanf("%d",&r);
    printf("Enter Your Coloum Limit\n");
    scanf("%d",&c);
    int i,j,a[c][r],k,temp;
    printf("Enter Your Array\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
           // printf("Enter Your a[%d][%d] Value\n",i,j);
            scanf("%d",&a[i][j]);
      }

      printf("\n");
    }
    printf("\nYour Entered Array\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<c;i++){
     for(j=0;j<r-1;j++){
      for(k=j+1;k<r;k++){
        if(a[i][j]<a[i][k]){
         temp=a[i][k];
         a[i][k]=a[i][j];
         a[i][j]=temp;
          }
        }
      }

    }

       printf("\nYour Described Array Is:\n");
      for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

 return 0;

     }
