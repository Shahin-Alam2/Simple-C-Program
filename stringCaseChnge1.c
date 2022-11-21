#include<stdio.h>
int main()
{
    int i;
    char country[]="bAnGlaDesH";

    for(i=0;i<10;i++){
       if(country[i]>='a'&&country[i]<='z'){
        country[i]='A'+country[i]-'a';
       }
      else if(country[i]>='A'&&country[i]<='Z'){
        country[i]='a'+country[i]-'A';
       }
    }
    printf("%s\n",country);

    return 0;
}
