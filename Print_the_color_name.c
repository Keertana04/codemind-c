#include<stdio.h>
int color(char ch)
{
    if(ch=='V')
    {
        return 0;
    }
    else if(ch=='I')
    {
        return 1;
    }
    else if(ch=='B')
    {
        return 2;
    }
    else if(ch=='G')
    {
        return 3;
    }
    else if(ch=='Y')
    {
        return 4;
    }
    else if(ch=='O')
    {
        return 5;
    }
    else if(ch=='R')
    {
        return 6;
    }
    
}
int main()
{
   char ch;
   scanf("%c",&ch);
   char x=color(ch);
   if(x==0)
   {
       printf("Violet");
   }
   else if(x==1)
   {
       printf("Indigo");
   }
   else if(x==2)
   {
       printf("Blue");
   }
   else if(x==3)
    {
        printf("Green");
    }
    else if(x==4)
    {
        printf("Yellow");
    }
    else if(x==5)
    {
        printf("Orange");
    }
    else if(x==6)
    {
        printf("Red");
    }
    else 
    {
        printf("-1");
    }
   
}