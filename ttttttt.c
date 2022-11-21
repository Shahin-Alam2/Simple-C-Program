#include <stdio.h>
int main()
{
    int i,j,k,n,m,t;
    scanf("%d",&n);
    m=2*n-1;
    for(i=m;i>0;i--){
        if(i>=n){
            for(k=1;k<=m-i;){
                k++;
                printf(" ");
            }
            t=k;
        }
        else{
                t=1;
            for(k=i-1;k>0;){
                k--;
                t++;
                printf(" ");
            }
        }
        for(j=0;j<=n-t;j++){
            printf("C");
            }
            printf("\n");
        }
    return 0;
}
