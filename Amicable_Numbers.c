#include<stdio.h>
int main()
{
    int x,y,sum=0,sum2=0,i;
    scanf("%d",&x);
    scanf("%d",&y);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }
    }
    for(i=1;i<x;i++)
    {
        if(y%i==0)
        {
            sum2=sum2+i;
        }
    }
    if(sum==y && sum2==x)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}