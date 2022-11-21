#include<stdio.h>

int check(int n);
int save_prime(int a[],int c);

int main()
{
    int i,j,k=0,n,m,c=0,ara[100];
    scanf("%d",&m);

    for(n=m,i=0;n>0;n--,i++){

        if(n==1){
            break;
        }
       else if(check(n)==1){
            ara[c]=n;
           c++;
            printf("%d Prime\n",n);
        }
        else{
            printf("%d Not Prime\n",n);
        }
    }
    printf("Length:%d\n",c);

    for(i=0;i<c;i++){
        printf("%d\n",ara[i]);
   }

    return 0;
}

int check(int n){

    int i;
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    for(i=3;i<=n/2;i=i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

/* int save_prime(int ara[],int c){

    int i,ara[100];

    for(i=0;i<c;i++){
        ara[i]=n;
    printf("%d\n",ara[i]);
    }
}*/
