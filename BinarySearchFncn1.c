#include<stdio.h>

int b_search(int ara[],int low,int high,int key);

int main()
{
    int ara[]={21,23,38,45,59,67,75,80,84,97,105};
    int low=0,high=10,mid;
    int key1=38,key2=84;

    mid=b_search(ara,low,high,key1);
      if(low>high){
        printf("%d not found.\n",key1);
    }
    else{
        printf("%d is the %dth element.\n",ara[mid],mid+1);
    }

     mid=b_search(ara,low,high,key2);
    if(low>high){
        printf("%d not found.\n",key1);
    }
    else{
        printf("%d is the %dth element.\n",ara[mid],mid+1);
    }

    return 0;
}
int b_search(int ara[],int low,int high,int key){

    int mid;

    while(low<=high){
        mid=(low+high)/2;

        if(key==ara[mid]){
            break;
        }
        if(key<ara[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return mid;
}
