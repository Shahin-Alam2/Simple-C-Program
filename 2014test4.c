#include<stdio.h>
int main()
{
    int *a,b=30;
    a=&b;
    b=*a+40;
    a=b%5;

    printf("%d %d\n",*a,b);

    return 0;
}
