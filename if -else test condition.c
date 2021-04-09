#include<stdio.h>
#include<conio.h>
int main(){
 int math,phy,chem,mark;
  printf(" math=\n phy=\n chem=\n");
  scanf("%d%d%d",&math,&phy,&chem);
if(math>=60 && phy>=50 && chem>=40){

 mark=math+phy+chem;

 if(mark>200||mark>150){
    printf("The condiate is eligible");
   }
else
   printf("The condiate is not eligible");

}
else

   printf("The condiate is not eligible");
return(0);
}
