#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n)
    {
        a=n%10;
        n=n/10;
        if(a%2==0 && n%2==0)
        {
            printf("Even");
        }
        else if(a%2!=0 && n%2!=0)
        {
            printf("Odd");
        }
        else
        {
            printf("Mixed");
        }
        return 0;
    }
}