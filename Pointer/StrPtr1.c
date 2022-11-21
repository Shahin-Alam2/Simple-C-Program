#include<stdio.h>
int main()
{
    //char s[]="Bangladesh";
    char *p="Bangladesh";
    //char *p;

    // p=s;
    printf("Name of our country is %s\n",p);
    printf("Address of p:%p\n",&p);

    return 0;
}
