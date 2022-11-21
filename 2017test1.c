#include<stdio.h>
int main()
{
    int i=5;
    float f=7.5;
    char c='a';

    printf("%d\n",i+c);
    printf("%c\n",i+c);

    printf("%d\n",i+f); // its value 0
    printf("%f\n",i+f);   //its 12.50

    return 0;
}
