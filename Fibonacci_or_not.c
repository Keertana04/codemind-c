#include<stdio.h>
int main()
{
    int i,n,r,j=0;
    int a=0,b=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      r=a+b;
      a=b;
      b=r;
    if(r==n){
        j++;
    }
}
    if(j!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}