#include<stdio.h>
int main()
{
    int n,a,m,b,gcd;
    scanf("%d%d",&a,&b);
    n=a; m=b;

        for(;;){
            if(b%a==0){
                printf("GCD = %d\n",a);
                printf("LCM = %d\n",(n*m)/a);
                break;
            }
            gcd=b%a;
            b=a;
            a=gcd;
        }

    return 0;
}
