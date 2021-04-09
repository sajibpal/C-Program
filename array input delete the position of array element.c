#include<stdio.h>
#include<conio.h>
int main(){

    int array[20],n,i,number;
    printf("enter the array size=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&array[i]);
     }
     printf("delet position number=");
     scanf("%d",&number);
     for(i=0;i<n;i++){
      if(array[i]==number){
      printf("");
        }
      else{
       printf(" %d",array[i]);
      }

               }
    return 0;
}
