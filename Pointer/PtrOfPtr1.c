#include<stdio.h>
int main()
{
    char c='A';
    char *p,**q;

    p=&c;
    q=&p;

    printf("Value of c:%c\n",c);
    printf("Value of *p:%c\n",*p);
    printf("Value of **q:%c\n",**q);

    return 0;
}
