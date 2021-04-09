#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,n;
    scanf("%d",&n);
    for(x=1;x<=n;x++){

     for(y=1;y<=x;y++){
       if(x%2&&y%2){
          printf("0");
       }
       else if(x%2&&y%2==0){
           printf("1");
        }
       else if(x%2==0&&y%2){
           printf("1");
        }
        else{
        printf("0");
        }

         }


    printf("\n");
    }
  return 0;
  }
