#include<stdio.h>

int main()
{
    int i,j,n,r,c=0;
    scanf("%d",&n);

    for(i=2;i<=n;i++){
    for(j=2;j<=i;j++){

        r=i%j;
        if(r==0){
            c++;
        }
        else{
            c=0;
        }
    }
    if(c>1){
        printf("%d is Not Prime\n",j);
    }
    else{
        printf("%d is Prime\n",j);
      }
      c=0;
    }

  return 0;
}
