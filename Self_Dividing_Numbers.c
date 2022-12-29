#include<stdio.h>
#include<math.h>
int s(int n)
{
 int t,d,a=0,b=0;
 t=n;
 while(n){
     d=n%10;
     if(d==0)
     {
         return 0;
     }
     if(t%d==0)
     {
         b++;
     }
     a++;
     n=n/10;
 }
 if(a==b)
 {
     return 1;
 }
 else
 {
     return 0;
 }
}
int main()
{
    int v,k,i;
    scanf("%d%d",&v,&k);
    for(i=v;i<=k;i++)
    {
        if(s(i))
        {
            printf("%d ",i);
        }
    }
}