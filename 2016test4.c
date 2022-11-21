#include<stdio.h>
#include<conio.h>

void add_int(int n);
int x,p,q;

int main()
{
    int p;
    q=200;
    x=10;
    printf("\nBefore calling x=%d p=%d q=%d",x,p,q);
    add_int(x);
    printf("\nAfter calling x=%d p=%d q=%d",x,p,q);

}
void add_int(int x){

    x=50;
    p=200;
    q=300;
}
