#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter numbers of Rows:");
    scanf("%d",&r);
    printf("Enter numbers of column:");
    scanf("%d",&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
