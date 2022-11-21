#include<stdio.h>
#include<conio.h>

int y(int n);

int main()
{
    int x;
    x=y(50);
    printf("Final output=%d\n",x);
    getch();

    //return 0;
}
int y(int n){

    if(n==0){
        printf("In terminating condition=%d\n",n);
        return n;
    }
    else{
        printf("In recursive calling n=%d\n",n);
        return n+y(n-5);
    }
    printf("CSE %d times\n",n);
}
