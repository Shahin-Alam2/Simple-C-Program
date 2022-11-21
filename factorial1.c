#include<stdio.h>
int main()
{
    int i,n;
    double s=1;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        s=s*i;

    }
    printf("%0.2lf",s);

    return 0;
}
