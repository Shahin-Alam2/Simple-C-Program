#include<stdio.h>
int main()
{
    int i,j,n;

    for(n=1;n<=2;n++){
            if(n==1){
    for(i=7;i>0;i--){

        for(j=i;j>0;j--){
            printf("C");
         }
            printf("\n");
          }
       }
       else if(n==2){
            for(i=1;i<7;i++){

        for(j=0;j<=i;j++){
            printf("C");
         }
            printf("\n");
          }
       }
    }

    return 0;
}

