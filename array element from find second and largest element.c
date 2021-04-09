#include<stdio.h>
#include<conio.h>
int main(){

    int j,i,temp,n;
    printf("enter the array size=");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
    scanf("%d",&array[i]);
     }
    for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){
         if(array[i]>array[j]){
          temp=array[i];
          array[i]=array[j];
          array[j]=temp;
          }

        }
    }       //1 2 4 6 9

         i=0;
        printf("%d\n",array[i+1]);
        printf("%d\n",array[n-2]);



return 0;
}
