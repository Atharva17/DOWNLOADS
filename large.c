# include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("%d is large",a);
else if(b>c)
printf("%d is large",b);
else
printf("%d is large",c);
}
