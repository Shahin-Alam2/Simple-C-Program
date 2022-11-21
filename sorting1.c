#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0,s=1000000,a[5]={3,2,1,4,5},b[5];


    for(i=0;i<5;i++){

        for(j=0;j<5;j++){
            if(s>a[j]){
              s=a[j];
              k=j;
         }
     }
        b[i]=s;
        a[k]=1000000 ;
        s=1000000;

    }

    for(i=0;i<5;i++){
    printf("%d\t",b[i]);
    }
    return 0;
}
