#include<stdio.h>
void main()
{
    int n,c=0;
    
    scanf("%d",&n);
    while(n!=0)
    {   
        n/=10;
        c=c+1;
     }
     printf("%d",c);
}
