#include<stdio.h>
int main()
{   int n1,i,z=0,sum=0;

    while(z!=1){
    scanf("%d",&n1);
    if(n1==0){
        z=1;
        break;
    }
    else{
    for(i=1;i<=10;i++)
    {
    printf("%d X %d = %d\n",n1,i,n1*i);

    }}
    }
    return 0;
}
