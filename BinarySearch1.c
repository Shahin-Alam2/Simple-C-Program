#include<stdio.h>
int main()
{
    int ara[]={21,23,38,45,59,67,75,80,84,97,105};
    int low=0,mid,high=10;
    int n=97;

    while(low<=high){
        mid=(low+high)/2;

        if(n==ara[mid]){

            break;
        }

        if(n<ara[mid]){
            high=mid-1;
        }

        else{
            low=mid+1;
        }
    }

    if(low>high){
        printf("%d Not Found.\n",n);
    }
    else{
        printf("Found.\n%d is the %dth element.\n",ara[mid],mid+1);
    }

    return 0;
}
