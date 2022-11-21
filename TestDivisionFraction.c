#include<stdio.h>

int main()
{
    float a,b,s;
    printf("Enter two integer:\n");
    scanf("%f%f",&a,&b);

    s=a/b;

    //printf("%d / %d = %d\n",a,b,s);
    printf("%0.2f / %0.2f = %0.2f\n",a,b,s);


    return 0;
}
