#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
      printf("Factors of the %d :\n",n);
    for (i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        printf("%d\n",i);
    }
    printf("%d",n);

    return 0;
}
