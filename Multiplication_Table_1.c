#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        if(i!=0)
        printf("%d x %d = %d
",n,i,n*i);
    }
}