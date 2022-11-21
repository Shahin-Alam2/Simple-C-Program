#include<stdio.h>
int main()
{
    int i;
    char c;
    printf("Enter a letter:\n");
    c=getchar();

    if(c<=90){
        c=c+32;
    }
    else if(c>=97){
        c=c-32;
    }
    printf("%c\n",c);

    return 0;
}

