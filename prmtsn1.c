#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=3;a++){
            printf("a=%d\n",a);
        for(b=1;b<=3&&b!=a;b++){
            printf(" b=%d\n",b);
            for(c=1;c<=3&&c!=a&&c!=b;c++){
                printf("c=%d\n",c);
                printf("%d %d %d\n",a,b,c);
            }
        }
    }

    return 0;
}
