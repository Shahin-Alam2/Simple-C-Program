#include<stdio.h>
int main()
{
    int b,n;
    scanf("%d",&n);

    b=n/2;

    if((n-(b*2))==1){
        printf("Odd");
    }
    else
    {
        printf("Even");
    }

    return 0;
}
