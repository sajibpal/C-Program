#include<stdio.h>
int add(int a,int b)
  {
      int c;
      c=a+b;
      return (c);
  }
int sub(int d,int e)
  {
      int f;
      f=d-e;
      return (f);
  }
int mul(int g,int h)
  {
      int i;
      i=g*h;
      return (i);
  }
int main()
  {
      int x,y,z,a,b,c;
      printf("Enter your two value:\n");
      scanf("%d%d",&x,&y);
      printf("choose your operation:\nFor addition:Enter-1\nFor substruction:Enter-2\nFor multiapplication:Enter-3\n");
      scanf("%d",&z);
      switch(z)
      {
          case 1:
          a=add(x,y);
          printf("Addition value:%d",a);
          break;
          case 2:
          b=sub(x,y);
          printf("Substruction value:%d",b);
          break;
          case 3:
          c=mul(x,y);
          printf("Multiapplication value:%d",c);
          break;
          default:
          printf("you were prease rong key!");
      }

  }
