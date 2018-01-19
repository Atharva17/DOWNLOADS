#include<stdio.h>
int main()
{
int n,i,sum=0,k,N[100];
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
 scanf("%d",&N[i]);
for(i=0;i<k;i++)
sum=sum+N[i];
printf("sum=%d",sum);
}
