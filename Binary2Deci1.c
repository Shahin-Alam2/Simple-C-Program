#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char bin[10];
    int i,len,position,deci;
    scanf("%s",bin);

    deci=0;
    len=strlen(bin);
    position=len-1;

    for(i=0;i<len;i++){

       deci=deci+(bin[i]-'0')*pow(2,position);
      position--;

    }
     printf("%d\n",deci);


    return 0;
}
