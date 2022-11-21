#include<stdio.h>
int main()
{
    int num;
    char c;
    double d;
    float f;

    printf("%lu\n",sizeof(int));
    printf("Size of int: %d byte\n",sizeof(num));
    printf("Size of char: %d byte\n",sizeof(c));
    printf("Size of double: %d byte\n",sizeof(d));
    printf("Size of float: %d byte\n",sizeof(f));

    return 0;
}
