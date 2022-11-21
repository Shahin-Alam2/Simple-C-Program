#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n;i>0;i--){
            for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=i;j>0;j--){
            printf("C");
         }
            printf("\n");
        }
      for(i=1;i<n;i++){
            for(k=n-i;k>1;k--){
                printf(" ");
            }
        for(j=0;j<=i;j++){
            printf("C");
         }
            printf("\n");
      }
    return 0;
}
