#include<stdio.h>
int main(){
   int n,r, rev, temp,s,e;
   scanf("%d",&s);
   scanf("%d",&e);
   for(n=s;n<=e;n++){
      temp=n;
      rev=0;
      while(temp){
         r=temp%10;
         temp=temp/10;
         rev=rev*10+r;
      }
      if(n==rev)
         printf("%d ",n);
   }
   return 0;
}