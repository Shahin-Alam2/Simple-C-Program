#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter numbers of rows:");
    scanf("%d",&r);
    printf("Enter numbers of columns:");
    scanf("%d",&c);

    for(i=0;i<r;i++){

        for(j=0;j<i+1;j++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}
