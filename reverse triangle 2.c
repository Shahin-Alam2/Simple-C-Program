#include<stdio.h>
int main()
{
    int n,r,c;
    scanf("%d",&n);

    for (r=n;r>0;r--)
    {
        for (c=r;c>0;c--)
        {
            printf("%d",c);
        }
        printf("\n");
    }

    return 0;
}
