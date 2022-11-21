#include<stdio.h>

int main()
{
    int n1,n2,n3,sum,sub,multi;
    float div;

    printf("Enter 3 numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    sum=n1+n2+n3;
    sub=n2-n1;
    multi=n1*n2;
    div=(float)n1/n2;

    printf("%d %d %d %lf\n",sum,sub,multi,div);

    return 0;
}
