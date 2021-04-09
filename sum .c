#include <stdio.h>   //this program is fixed time sum add//
#include <stdlib.h>

int main()
scanf("%d",&t);
{  int a, sum,t,i,n;
while(t--){

scanf("%d",&n);
 sum=0;
for( i=1;i<=n;i++){
scanf("%d",&a);
sum=sum+a;
}
printf("sum=%d",sum);
}
return 0;
}
