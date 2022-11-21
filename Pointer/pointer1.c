#include<stdio.h>
int main()
{
    int a,b,c,x=10;
    int *p;

    p=&x;

    printf("value of x = %d\n",*p);    //ekahne *p er jagay x dileo hobe
    printf("Value of p is %p\n",p);

    return 0;
}
