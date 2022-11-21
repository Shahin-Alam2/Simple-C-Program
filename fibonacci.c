#include<stdio.h>
int main()
{
    int a=1,b=1,c=0,n;

    printf("Up to the number:");
    scanf("%d",&n);
    printf("0\t");

    while(c<n)
    {
      c=a+b;
      a=b;
      b=c;
     printf("%d\t",c);
    }
     printf("\n");

  return 0;
}
