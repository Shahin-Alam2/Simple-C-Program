#include<stdio.h>
int main()
{
    char c1='A',c2='B';
    int n1=12,n2=35;

    printf("Value of c1=%c\tAddress of c1=%p\n",c1,&c1);
    printf("Value of c2=%c\tAddress of c2=%p\n",c2,&c2);

    printf("\nValue of n1=%d\tAddress of n1=%p\n",n1,&n1);
    printf("Value of n2=%d\tAddress of n2=%p\n",n2,&n2);

    return 0;
}
