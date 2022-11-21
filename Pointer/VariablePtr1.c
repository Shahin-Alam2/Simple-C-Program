#include<stdio.h>
int main()
{
    int x=10;
    int *p;

    p=&x;
    printf("Value of x:%d\n",x);   //ekhane x er jagay *p dileo 10 asbe

    *p=20;
    printf("Value of x:%d\n",*p);  //*p er jagay x dileo 20 asbe
    printf("Address of x:%p\n",p);  //p er jagay &x likhleo hobe
    printf("Value of p:%p\n",&x);

    return 0;
}
