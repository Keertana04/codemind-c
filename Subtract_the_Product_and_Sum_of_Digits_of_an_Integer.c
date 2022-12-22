#include<stdio.h>
int main()
{
    int n,t,r,s=0,r1,s1=1,a;
    scanf("%d",&n);
    t=n;
    for(;n>0;)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    for(;t>0;)
    {
        r1=t%10;
        s1=s1*r1;
        t=t/10;
    }
    a=s1-s;
    printf("%d",a);
}