#include<stdio.h>
int main()
{
    char ch;
   // printf("Enter a character:");
    ch=getchar();
    if((ch>='a')&&(ch<='z'))
    {
        printf("Small Letter.");
    }
    else if((ch>='A')&&(ch<='Z')){
        printf("Capital Letter");
    }
      else
        printf("Not a letter.");

    return 0;
}
