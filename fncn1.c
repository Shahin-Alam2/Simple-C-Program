#include<stdio.h>

int a=100;
int test(int a);

int main()
{
    int a=50;//ekhane ja deoa hobe tai print hobe...function e ja kichui kora hok na keno
   printf("Before function a=%d\n",a);
   test(a);
   printf("After a=%d\n",a);

    return 0;
}
  int test(int a){
      printf("Inside Function: a= %d\n",a);
       a=10;
       printf("Assigning a value Inside Function: a= %d\n",a);
      return a;
}
