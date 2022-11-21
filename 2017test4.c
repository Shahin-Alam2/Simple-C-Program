#include<stdio.h>  //if .h not used then Fatal error,no such file or directory
int main()
{
    int x,y;
    scanf("%dd",&x,&y);

    switch(x)
    {
        case (x<0):
        printf("x is positive\n");
        break;
        case(x>0):
        printf("x is negative");

    }
    x=f1(y);
    printf("Final value of = %d\n",x);
    }

    void f1(in y)
    {
        y=y*y;
        return y;
    }

    return 0;
}
