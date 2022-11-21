#include<stdio.h>
int main()
{
    int i,ara[10]={10,20,30,40,50,60,70,80,90,100};
    int j,ara2[10];

    for(i=0,j=9;i<10,j>=0;i++,j--){
       ara2[j]=ara[i];
    }
    for(i=0;i<10;i++){
        ara[i]=ara2[i];
    }
    for(i=0;i<10;i++){
         printf("%dth element is %d\n",i+1,ara[i]);
    }

    return 0;
}
