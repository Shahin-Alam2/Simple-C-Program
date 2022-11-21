#include<stdio.h>
int main()
{
    char c='A';
    char *p,**q;

    p=&c;
    q=&p;
    **q='B';  //q er address p houay *p='B' abar p er address c houay ekhon c='B'

    printf("Value of c:%c\n",c);
    printf("Value of *p:%c\n",*p);
    printf("Value of **q:%c\n",**q);

    return 0;
}
