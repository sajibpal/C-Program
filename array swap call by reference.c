#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y,int *z);

int main(){

int x,y,z;
printf("enter the value of 1st = ");
scanf("%d",&x);
printf("enter the value of 2st = ");
scanf("%d",&y);
printf("enter the value of 3rd = ");
scanf("%d",&z);
swap(&x,&y,&z);

return 0;

}


void swap(int *x,int *y,int *z){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    temp=*z;
    *z=*x;
    *x=temp;
 printf("%d\n%d\n%d",*x,*y,*z);
}

