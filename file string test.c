#include<stdio.h>
#include<conio.h>
int main(){
 char name[20];
 FILE *fp;
  fp=fopen("new.text","r"); ///fp=fopen("new.text","w");
  fgets(name,15,fp);     ///gets(name);
  puts(name);            ///fputs(name,pf)
  fclose(fp);
}
