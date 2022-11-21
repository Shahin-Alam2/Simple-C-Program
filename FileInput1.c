#include<stdio.h>
int main()
{
    FILE *output_file;
    output_file=fopen("Input.txt","w");
    char i[80];
    gets(i);
    fputs(i,output_file);
    return 0;
}

