#include<stdio.h>
#include<conio.h>

void pointer(int *p,int *q,int *r,int *s);

int main()
{
    int a,b,c,d,*x,*y;
    a=10;
    b=20;
    x=&c;
    y=&d;
    c=30;
    d=40;
    printf("Before calling %d %d %d %d\n",a,b,*x,*y);
    pointer(&c,&d,&a,&b);
    printf("After calling %d %d %d %d\n",a,b,*x,*y);

    return 0;
}
void pointer(int *p,int *q,int *r,int *s)
{

    *p=100;
    *q=200;
    *r=300;
    *s=400;
}
