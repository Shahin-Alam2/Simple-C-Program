#include<stdio.h>

int min_find(int ara[],int n);
int max_find(int ara[],int n);
int find_sum(int ara[],int n);
double find_avg(int ara[],int n);

int main()
{
    int n=10,min,max,sum;
    double avg;
    int ara[]={1,3,4,2,7,5,8,6,10,9};

    max=max_find(ara,n);
    min=min_find(ara,n);
    sum=find_sum(ara,n);
    avg=find_avg(ara,n);

    printf("min element: %d\n",min);
    printf("max element: %d\n",max);
    printf("Summation=%d\n",sum);
    printf("Average=%0.2lf\n",avg);

    return 0;
}

int max_find(int ara[],int n){

    int i;
    int max=ara[0];

    for(i=0;i<n;i++){
        if(max<ara[i]){
            max=ara[i];
        }
    }
    return max;
}
int min_find(int ara[],int n){

    int i,min;
    min=ara[0];
    for(i=0;i<n;i++){
        if(min>ara[i]){
            min=ara[i];
        }
    }
    return min;
}
int find_sum(int ara[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+ara[i];
    }
    return sum;
}
double find_avg(int ara[],int n){
    int sum;
    double avg;
    sum=find_sum(ara,n);
    avg=(double)sum/n;
    return avg;
}
