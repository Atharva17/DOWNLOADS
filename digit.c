#include<stdio.h>
int main()
{
int temp,num,digit,count=0;
scanf("%d",&num);
while(num>1)
{
temp=num;
digit=num%10;
num=temp/10;
count++;
}
printf("digit=%d",&count);
}
