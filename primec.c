#include <stdio.h>//fixed prime number sum
#include <conio.h>
int main()
{\
int m,n,a,i,cheak, sum,t;
scanf("%d",&t);
while(t--){
 sum=0,
scanf("%d%d",&m,&n);
 for(i=m;i<=n;i++){
 a=i;
 cheak=1;
for(i=2;i<a;i++){
if(a%i==0)
cheak=0;
}
if(cheak==1){
sum=sum+a;}

}
printf("%d",sum);
}
return 0;
}
