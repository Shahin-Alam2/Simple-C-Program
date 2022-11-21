#include<stdio.h>
int main()
{
    int i,j;
    i=5;
    j=i++;  /* j=5+1(this print j=5 cause its operation performed not now but i is increased so i will print 6 )*/
    printf("i and j :%d and %d\n",i,j);
    i=10;
    j=++i;  /* j=1+10(this operation performed first so i=11 and it will print) then j=1+11(this print j=11) */
    printf("i and j :%d and %d",i,j);

    return 0;
}
