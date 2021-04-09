#include<stdio.h>
#include<conio.h>
int main(){

char str[30],i,len;
 FILE *fp,*fp1,*fp2;
 fp=fopen("name.txt","r");
 fp1=fopen("big.txt","w");
 fp2=fopen("small.txt","w");

  fscanf(fp,"%[^\n]",str);
  len=strlen(str);
   if(len>5){
    fprintf(fp1,"%s",str);
    }
   else{
     fprintf(fp2,"%s",str);
     }


}
