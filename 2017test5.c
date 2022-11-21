#include<stdio.h>
int main()
{
    int i=2,j=3,k,l;
    float a,b;

    k=i/j*j;
    l=j/i*i;

    printf("%d,%d,\t%f,%f\n",k,l,a,b);  //0  2    0.000000  0.000000

    return 0;
}
