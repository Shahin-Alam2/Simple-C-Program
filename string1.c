#include<stdio.h>
int main()
{
    int i;
    char country[]={'B','a','N','g','L','a','D','e','S','h','\0'};

    for(i=0;i<10;i++){

    if(country[i]>='a'&&country[i]<='z'){
         printf("%c is small letter.\n",country[i]);
    }
    else if(country[i]>='A'&&country[i]<='Z'){
         printf("%c is Capital letter.\n",country[i]);
      }
    }

    return 0;
}
