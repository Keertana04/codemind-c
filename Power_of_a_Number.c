#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,p,c;
    scanf("%d%d%d",&x,&y,&z);
    p=pow(x,y);
    c=p%z;
    printf("%d",c);
    
}