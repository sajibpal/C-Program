#include<stdio.h>
#include<conio.h>
int main(){
 char name[20];
 FILE *fp,*fp1;
  fp=fopen("new.text","w");
  scanf("%s",name);
  fprintf(fp,"%s",name);
  fclose(fp);

  fp1=fopen("sajib.txt","r");
   fscanf(fp1,"%s",name);
   printf("%s",name);
   fclose(fp1);
}
