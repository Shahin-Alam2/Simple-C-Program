#include<stdio.h>

int check_prime(int n);

int main()
{
    int n;

    while(1){
            printf("Enter a number to check Prime/Not: (Type 0 to exit)\n");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(n==1){
            printf("Undefined\n");
        }
       else if(check_prime(n)==1){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }

    return 0;
}
int check_prime(int n){

    int i;

   /* if(n<2){
        return 0;
    }*/
    for(i=2;i<n-1;i++){
        if(n%i==0){
            return 0;
        }
    }

    return 1;
}
