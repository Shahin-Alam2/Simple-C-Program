#include<stdio.h>
int main()
{
    int i,j,a1[5]={50,51,53,54,55},a2[5]={53,54,53,52,51},a3[5]={52,54,55,51,52},a[5],n=0;

    for(i=0;i<5;i++){
        a[i]=a1[i]/4+a2[i]/4+a3[i]/2;
    }

             for(j=50;j<=54;j++){
       //printf("%d\n",a[i]);
    for(i=0;i<5;i++){
    if(a[i]==j){
       n++;
    }

       }
       if(n==0){
        printf("%d=%d\n",j,n);
       }
        else{
        printf("%d=%d\n",j,n);
        }
        n=0;

    }
    for(i=0,j=50;i<5;i++,j++){

    }


    return 0;
}
