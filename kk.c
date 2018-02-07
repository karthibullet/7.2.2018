
#include<stdio.h>
int main()
{
int a,b;
printf("enter the number");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
if(a%b==0)
break;
}
if(a==b)
{
printf("prime number");
}
else
{
printf("not prime number");
}
return 0;
}
