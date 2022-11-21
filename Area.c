#include<stdio.h>
#include<conio.h>
int main()
{
    float b,h,a;
    printf("Enter value of base and height:\n");
    scanf("%f%f",&b,&h);

    a=(1/2)*(b*h);

    printf("Area=%0.2f\n",a);
    getch();
    return 0;
}
