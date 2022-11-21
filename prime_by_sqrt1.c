#include<stdio.h>
#include<math.h>

int check(int n);

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
        else if(check(n)==1){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }

    return 0;
}
int check(int n){

    int i,root;
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    root=sqrt(n);
    for(i=3;i<root;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
