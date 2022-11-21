#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,len,deci=13;
    int bin[10];

    /*scanf("%s",deci);
    len=strlen(deci);
    dec=(int) deci;*/

    while((deci/2)<=0){

        bin[i]=deci%2;
        deci=deci/2;
        i++;

    }
    for(i=0;i<4;i++){
    printf("%d",bin[i]);
    }

    return 0;
}
