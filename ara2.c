#include<stdio.h>
int main()
{
    int i,j,a,ara[11]={10,20,30,40,50,60,70,80,90,100,122};

    for(i=0,j=10;i<5;i++,j--){
        a=ara[i];
        ara[i]=ara[j];
        ara[j]=a;
    }
    for(i=0;i<11;i++){
         printf("%dth element is %d\n",i+1,ara[i]);
    }

    return 0;
}
