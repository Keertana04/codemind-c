#include<stdio.h>
int main(){
    int n,i,j,x=65;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%c ",x);
        }
        printf("
");
        x=x+1;
    }
}