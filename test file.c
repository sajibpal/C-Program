#include<stdio.h>
#include<conio.h>
int main(){

 int i,n;
 FILE *fp,*fp1,*fp2;
 fp=fopen("data.txt","r");

 printf("enter the array size= ");
 scanf("%d",&n);
 int array[n];

  fp1=fopen("odd.txt","w");
  fp2=fopen("even.txt","w");

  for(i=0;i<n;i++){

   fscanf(fp,"%d",&array[i]);
     if(array[i]%2){
      fprintf(fp1,"%d ",array[i]);
       }
      else{
      fprintf(fp2,"%d ",array[i]);
       }
  }

 return 0;
}
