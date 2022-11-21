#include<stdio.h>
int main()
{
    int a,b;
    float c,d;

    printf("Enter an integer number:\n");
    scanf("%d",&a);
    printf("Enter a floating number:\n");
    scanf("%f",&c);

    d=a/c;

    printf("%d / %f = %f\n",a,c,d);

    return 0;
}
