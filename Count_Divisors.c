#include<stdio.h>
int main()
{
    int i,r,k,d;
    d=0;
    scanf("%d%d%d",&i,&r,&k);
    for(;i<=r;i++)
    {
        if(i%k==0)
        d=d+1;
        
    }
    printf("%d",d);
}