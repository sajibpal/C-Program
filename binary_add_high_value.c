#include<stdio.h>
int main()
{
    int a,n,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%2;
        n=n/2;
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}

