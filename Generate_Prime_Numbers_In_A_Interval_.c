#include<stdio.h>
int main()
{
    int a,b,i,j,count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d
",i);
        }
        count=0;
    }
}