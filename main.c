#include <stdio.h>
int main()
{
    char str[16]="I am Bangladeshi";
    int i;
    //gets(str);
    //scanf("%s",str);
    for(i=16;i>=0;i--){
    printf("%c\n",str[i]);
    }
    printf("\n");
    return 0;
}
