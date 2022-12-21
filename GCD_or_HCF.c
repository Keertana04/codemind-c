#include<stdio.h>
int main()
{
    int a,b,c;
    int dividend,divisor,rem;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        dividend=a;
        divisor=b;
    }
    else
    {
        dividend=b;
        divisor=a;
    }
    while(divisor)
    {
        rem=dividend%divisor;
        dividend=divisor;
        divisor=rem;
    }
    printf("%d",dividend);
}