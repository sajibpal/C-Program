#include<stdio.h>
#include<conio.h>
struct student{
  char name[10];
  int roll;
  float gpa;
 };
int main(){
struct student stu[6];
 int i;
 for(i=0;i<6;i++){
  scanf("%s%d%f",&stu[i].name,&stu[i].roll,&stu[i].gpa);
  printf("name= %s\nroll= %d\ngpa= %0.2f ",stu[i].name,stu[i].roll,stu[i].gpa);

  }
  return 0;
 }
