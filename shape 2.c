#include <stdio.h>

int main()
{
        int i,j,k,n,m;
    scanf("%d",&n);
        m=2*n-1;
    for(i=m;i>0;i--){

        for(k=i;k<=m;k++){

            if(k>n){
                    printf("x");

            }

        }
         printf("\n");
    }

       /* for(j=0;j<=n-k;j++){
            printf("C");
         }
            printf("\n");

        }


    /*  for(i=1;i<n;i++){
            for(k=n-i;k>1;k--){
                printf(" ");
            }

        for(j=0;j<=i;j++){
            printf("C");
         }
            printf("\n");

      }*/
    return 0;
}
