#include<stdio.h>

int string_length(char str[]){

    int i=0;
    //int length=0;
   // for(i=0;str[i]!='\0';i++){
        //length++;
    //}
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int main()
{
    char country[100];    //country[] likhle error asbe array size missing
    int length;

    while(gets(country)!=NULL){
           // NULL er jaygay '\0' dileo hobe...karon NULL r '\0' eki
        length=string_length(country);
        printf("You written: %s\n",country);
        printf("Length:%d\n",length);
    }
       //type ctrl+z to exit the loop

    return 0;
}
