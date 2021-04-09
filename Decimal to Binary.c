#include<stdio.h>
int main()
{
    int m,n,i=0,j,b[10];
    int a[10];
    scanf("%d",&n);
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    n=i;
    for(i=0,j=n-1;i<n;i++,j--){
        b[i]=a[j];
        printf("%d",b[i]);
    }
    return 0;
}
