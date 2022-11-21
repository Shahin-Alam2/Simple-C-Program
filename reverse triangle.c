#include<stdio.h>
int main()
{
    int n,r,c;
    scanf("%d",&n);

    for (r=n;r>0;r--)
    {
        for (c=1;c<=r;c++)
        {
            printf("%c ",c+64);
        }
        printf("\n");
    }

    return 0;
}
