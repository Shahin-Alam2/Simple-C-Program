#include<stdio.h>

int x=1;

void fncn(int y)
{
    y=y*2;
    x=x+10;
    printf("Function,x=%d\ty=%d\n",x,y);

}
int main()
{
    int y=5;
    x=10;

    fncn(y);

    printf("main,x=%d\ty=%d\n",x,y);

    return 0;
}
