#include<stdio.h>
int main()
{
    int n,i,sum,prod;
    scanf("%d",&n);

    sum=0;
    prod=1;
    for (i=1;i<=n;i++)
    {
        prod=prod*i;
        sum=sum+prod;
    }
    printf("Factorial of %d = %d\n",n,prod);
    printf("Sum up to Factorial %d = %d",n,sum);

    return 0;
}
