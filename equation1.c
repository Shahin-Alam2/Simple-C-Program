#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,d,x,y;

    printf("Enter a1:");
    scanf("%lf",&a1);

    printf("a2:");
    scanf("%lf",&a2);

    printf("b1:");
    scanf("%lf",&b1);

    printf("b2:");
    scanf("%lf",&b2);

    printf("c1:");
    scanf("%lf",&c1);

    printf("c2:");
    scanf("%lf",&c2);

    d=a1*b2-a2*b1;
    if((int)d==0){
       printf("Math error.");
    }
    else{
        x=(b2*c1-b1*c2)/d;
        y=(c2*a1-c1*a2)/d;

        printf("X=%0.2lf\n",x);
        printf("Y=%0.2lf\n",y);
    }

    return 0;
}
