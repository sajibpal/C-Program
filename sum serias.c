#include <stdio.h>
#include <stdlib.h>

int main()
{  int a, sum,t,i,n;//this program is fixed time sum add
scanf("%d",&t);
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
