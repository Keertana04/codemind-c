#include<stdio.h>
int main()
{
    int i,n,s=0,r;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        r=n%i;
        if(r==0)
        s=s+i;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}