#include <stdio.h>

int main(){
    int i,j,n,s;
    scanf("%d",&s);
    scanf("%d",&n);
    for(i=1;i<=s;i++)
    {
        for(j=8;j>=n;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}