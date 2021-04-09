#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z,n;
scanf("%d",&n);
for(x=1;x<=n;x++){

 for(y=1;y<=x;y++){
     if(x%2&&y%2){
     printf("AA");
   }
  else if(x%2==0&&y%2){
   printf("BB");
  }
  else if(x%2&&y%2==0){
   printf("BB");
   }
   else{
    printf("AA");
    }

  }
    printf("\n");

 }

return 0;
}
