#include<stdio.h>
int main()
{
    int x,r;
    scanf("%d",&x);
    int max=0;
    while(x>0)
    {
        r=x%10;
        if(r>max)
        {
            max=r;
        }
        x=x/10;
    }
    printf("%d",max);
}