#include<stdio.h>
int main()
{
    int i,j,n,ara[3][5];
    for(i=7;i>0;i--){
        for(j=0;j<=i;j=j+2){
            printf("%d\t",j);

        }
        printf("\n");
    }


    return 0;
}
