#include<stdio.h>
int main(){
    int t,s,b;
    scanf("%d%d%d",&s,&t,&b);
    int p = (2*t*s*b*512)/1024;
    printf("%d KB",p);
}