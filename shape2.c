#include <stdio.h>

int main()
{
        int i,j,k,n,m;
    scanf("%d",&n);
        m=2*n-1;
    for(i=m;i>0;i--){

        for(k=i;k<=m;k++){

            if(k>n){
                    printf("C");

            }

        }
         printf("\n");
    }
    return 0;
}
