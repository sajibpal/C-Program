#include<stdio.h>
#include<conio.h>
int main(){

 int i,n;
 FILE *fp,*fp1;
 fp=fopen("beforesort.txt","r");
 fp1=fopen("aftersort.txt","w");

  printf("enter the array value= ");
  scanf("%d",&n);
  int number[n],temp,j;

   for(i=0;i<n;i++){
    fscanf(fp,"%d",&number[i]);
    }

   for(i=0;i<n-1;i++){
    for(j=i+1;j<=n;j++){
     if(number[i]>number[j]){
       temp=number[i];
       number[i]=number[j];
       number[j]=temp;

       }

     }
  }
     for(i=0;i<n;i++){
      fprintf(fp1,"%d ",number[i]);
       }

 }
