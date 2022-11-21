#include<stdio.h>

int main()
{
    int n,i,j,a[1000],t;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){

              t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;

         }
      }
   }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}


