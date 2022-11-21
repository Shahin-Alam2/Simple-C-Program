#include<stdio.h>
int main()
{
    int a,b,sum;
    double c;
    printf("Enter two integers and a double:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%lf",&c);  //scanf e shudhu lf dite hobe.. point dile 0 asbe

    sum=a+b;
    printf("Sum is %d+%d=%d\n",a,b,sum);
    printf("C is %0.2lf\n",c);

    return 0;
}
