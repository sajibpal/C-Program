#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char str[20],rev[20]={'null'},k,temp;
int len,i;
printf("insert the string = ");
 scanf("%[^\n]",&str);

  len=strlen(str);
  k=len;
  for(i=0;i<=k-1;i++){
   rev[i]=str[len-1];
   len--;
  }
   printf("%s\n",rev);


   int test=1;

   for(i=0;i<=k;i++){
    if(rev[i]!=str[i])
    {
     test=0;
    }
     }
    if(test==1){
     printf("this is palidom.\n");
    }
    else{
     printf("this is not palidom.\n");
      }



 return 0;
}
