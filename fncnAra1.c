#include<stdio.h>

void test(int ara[]);

int main()
{
    int ara[]={1,2,3,4,5};

    printf("Before function ara[0]=%d\n",ara[0]);
    test(ara);
    printf("After ara[0]=%d\n",ara[0]);

    return 0;
}
void test(int ara[]){
    ara[0]=100;
    //return ;
}
