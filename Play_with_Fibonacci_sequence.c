#include<stdio.h>
int main()
{
    int i,n,r;
    int a=0,b=1;
    r=a+b;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=3;i<=n;++i)
    {
        printf("%d ",r);
    a=b;
    b=r;
    r=a+b;
    }
}