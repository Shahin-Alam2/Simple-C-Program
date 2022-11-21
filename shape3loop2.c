#include<stdio.h>
int main()
{
    int n,m,i,s,c,t;
    scanf("%d",&n);
    m=2*n-1;

    for(i=0;i<m;i++){
        for(c=m/2,s=0;c>0;c--,s++){
            printf("c=%d s=%d\t",c,s);
        }
        //for(s=0;s<m-)
        printf("\n");
    }

    return 0;
}
