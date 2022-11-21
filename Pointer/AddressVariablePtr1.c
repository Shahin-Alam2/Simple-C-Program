#include<stdio.h>
int main()
{
    int x=10;
    int y;
    int *p;

    printf("Value of x:%d\n",x);

    p=&x;
    y=*p;   //y=pointer p je variable ke point korbe tar value
    *p=15;  //x er value o ekhon 15 kintu y=10 cz *p shudhu x variable ke point kore

    printf("Value of x:%d\n",x);
    printf("Value of y:%d\n",y);
    printf("Value of *p:%d\n",*p);
    printf("Address of x:%p\n",&x);
    printf("Address of y:%p\n",&y);
    printf("Value of p:%p\n",p);

    return 0;
}
