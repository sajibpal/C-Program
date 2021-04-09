#include<stdio.h>
#include<conio.h>
struct cse{
 int st1;
 int st2;
 int st3;
 //int mark
};
int main(){
int i,n,mark[20];
printf("enter the arrey size = ");
scanf("%d",&n);
struct cse student[n];
  for(i=0;i<n;i++){
  scanf("%d %d %d",&student[i].st1,&student[i].st2,&student[i].st3);
   printf("st1=%d\nst2=%d\nst3=%d",student[i].st1,student[i].st2,student[i].st3);

   mark[i]=student[i].st1+student[i].st2+student[i].st3;

  }
   for(i=0;i<n;i++){
    printf("\ntotal mark 1=%d",mark[i]);
    }
return 0;
}
