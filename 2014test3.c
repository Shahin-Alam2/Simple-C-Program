#include<stdio.h>
int main()
{
    int i=4,j;

    j=++i*i++;   //j=5*6 ,i=6
    i *= j;      //i=i*j   i=6*30

    printf("%d %d\n",i,j);

    return 0;
}
