#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(x==i*(i+1))
        {
            printf("YES");
            break;
        }
    }
    if(x!=i*(i+1))
    {
        printf("NO");
    }
}