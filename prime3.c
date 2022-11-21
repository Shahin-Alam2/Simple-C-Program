#include<stdio.h>

int check(int n);

int main()
{
    int n,m;
    scanf("%d",&m);

    for(n=m;n>=0;n--){

        if(n==0){
            break;
        }
        if(n==1){
            printf("Undefined\n");
        }
       else if(check(n)==1){

            printf("%d Prime\n",n);
        }
        else{
            printf("%d Not Prime\n",n);
        }
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

