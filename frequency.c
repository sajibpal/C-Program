#include<stdio.h>
#include<conio.h>
int main(){
char str[20],count[15]={'0'};
int i;
gets(str);
for(i=0;str[i]!='\0';i++){
 if(str[i]>='a' && str[i]<='z'){
  count[str[i]-'a']++;
  }
 }
 for(i=0;i<26;i++){
  if(count[i]!=0)
  printf(" %c occur %d time inthe enterd string \n",i+'a',count[i]);
  }
 return 0;
}
