#include <stdio.h>//arry search sum
#include <conio.h>
int main()
{int num[10],i,n,key,cheak,loc,no;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&num[i]);
scanf("%d",&key);

cheak=0;
for(i=0;i<=n;i++){
if(num[i]==key){
cheak=1;
loc=i+1;
break;
}
}
if(cheak==1)
printf("%d",loc);
else
printf("%d",no);
return 0;
}
