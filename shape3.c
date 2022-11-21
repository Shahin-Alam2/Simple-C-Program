#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);

    for(i=n;i>1;i--){

            for(j=1;j<=n-i;j++){
            printf(" ");
            }

        for(k=i;k>0;k--){
            printf("C");
         }
         if(i<=n){
         for(l=i-1;l>0;l--){
            printf("C");
           }
         }
        printf("\n");
      }

    for(i=1;i<=n;i++){

        for(j=1;j<=n-i;j++){
            printf(" ");
        }
          for(k=i;k>0;k=k-1){
            printf("C");
        }
        if(i>1){
        for(l=1;l<=i-1;l++){
            printf("C");
          }
        }
        printf("\n");
    }

    return 0;
}
