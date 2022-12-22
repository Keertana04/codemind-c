#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    c=n/4;
    if(n%4==0)
    {
        printf("%d",c);
    }
    else
    {
        c=c+1;
        printf("%d",c);
    }
}