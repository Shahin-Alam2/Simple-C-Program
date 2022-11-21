#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=n;i>0;i--){
            for(j=i;j<=n;j++){
                printf("C");
            }
        for(j=1;j<=2*i-3;j++){
            printf(" ");
        }
        for(j=i;j<=n;j++){
                if(i==1&&j==n){
                    break;
                }
                printf("C");
            }

        printf("\n");
    }

    return 0;
}
