#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char a[30],b[40];
int i;
printf("insert the string = ");
scanf("%[^\n]",&a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0){
printf("This is palidom");
}
else{
printf("this not palidom");
 }
 return 0;
}
