#include<stdio.h>
int main()
{
    int x=10,y;
    int *p,*q;

    p=&x;
    y=*p;   //ekhane y=10
    //q=&y;  //ei line comment out korte hobe
    *p=15;    //*p er value change kora mane p er address er value o change kora
    *q=20;   //jodi q=&y na lekha hoy tahole ekhane q kono variable address ke point kora thakbe na tai prgrm crash korbe

    printf("Value of x:%d\n",x);
    printf("Value of y:%d\n",y);
    printf("Value of *p:%d\n",*p);
    printf("Value of *q:%d\n",*q);

    return 0;
}
