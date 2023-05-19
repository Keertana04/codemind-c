#include<stdio.h>

int main()
{
    int n,i,h;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    h=arr[0];
    int j=1;
    while(j<n)
    {
       if(arr[j]%h==0)
       {
           j++;
       }
       else
       {
           h=arr[j]%h;
           i++;
       }
    }
    printf("%d",h);
    return 0;
}