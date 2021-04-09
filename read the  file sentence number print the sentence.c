#include<stdio.h>
#include<conio.h>

int main(){

  char str[100];
  int i;

  FILE *pf;
  pf=fopen("sentence.txt","r");
  fscanf(pf,"%[^\n]",str);

   for(i=0;str[i]!='\0';i++){
     if(str[i]=='.'||str[i]==','||str[i]=='?'||str[i]=='!'||str[i]==':'){
       printf("\n");
       }

      else{
        printf("%c",str[i]);
       }

   }

}
