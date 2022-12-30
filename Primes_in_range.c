  #include<stdio.h>
  #include<math.h>
int main()
{
    int min,max,i,j,c,tc=0;
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++)
    {
        int c=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c=0;
                break;
            }
        }
        if(c && i!=1)
        {
            tc++;
        }
    }
    printf("%d",tc);
}