#include<stdio.h>
int main()
{
    int a=10;
    int *p;

    p=&a;

    printf("*p = %d\n",*p);
    printf("Value of p is %p\n",p);

    return 0;
}
