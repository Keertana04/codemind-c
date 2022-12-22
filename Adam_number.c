#include<stdio.h>
#include<math.h>
int main()
{
    int r,n,t,s=0,q,c,a,b;
    scanf("%d",&n);
    c=n*n;
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    q=s*s;
    while(q>0)
    {
        a=q%10;
        b=b*10+a;
        q=q/10;
    }
    if(c==b)
    printf("True");
    else
    printf("False");
}