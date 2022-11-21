#include<stdio.h>
int main()
{
    int a,b,n,gcd,lcm;
    scanf("%d%d",&a,&b);


    if(a<b){
             n=a;
        if(b%a==0){
                gcd=a;
            printf("GCD = %d\n",gcd);
        }

        else{
            while(n>1){
                n=n-1;

                if((b%n==0)&&(a%n==0)){
                    gcd=n;
                    printf("GCD = %d\n",gcd);
                }
            }
        }
    }
    else if(b<a){
            n=b;
        if(a%b==0){
                gcd=b;
            printf("GCD = %d\n",gcd);
        }
        else{
        while(n>1){
                n=n-1;

                if((a%n==0)&&(b%n==0)){
                    gcd=n;
                    printf("GCD = %d\n",gcd);
                }
            }
        }
    }
    lcm=(a*b)/gcd;
    printf("LCM = %d\n",lcm);

    return 0;

}
