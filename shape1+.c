#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);


    for(i=n;i>0;i--){

        for(j=i;j>0;j--){
            printf("C");
         }
            printf("\n");

          }

      for(i=1;i<n;i++){

        for(j=0;j<=i;j++){
            printf("C");
         }
            printf("\n");
          }

    return 0;
}
