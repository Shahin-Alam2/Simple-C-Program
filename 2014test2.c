#include<stdio.h>
int main()
{
    int i=5,j=11,m;
    float a,b,c;

    a=i/j;
    b=1.0*i/j;
    c=i/j*1.0;
    m=(i&j|2);

    printf("%f %f %f %d\n",a,b,c,m);  //0.0000 0.50000 0.0000  3

    return 0;
}
