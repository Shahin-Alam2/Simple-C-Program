#include<stdio.h>
int main()
{
    int i=10,n=0;

    while(i>1)
    {
        if(i&1==1){
            i+=i<<2;
            i=i|1;
        }
        else
            i>>=1;

        n++;
    }
    printf("%d %d\n",n,i);

    return 0;
}
