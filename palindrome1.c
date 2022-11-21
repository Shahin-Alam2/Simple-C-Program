#include<stdio.h>
#include<string.h>
int main()
{
    char t,word[80];
    int c=0,i,j,len;

    printf("Type a word:");
    scanf("%s",word);

    len=strlen(word);

    for(i=0,j=len-1;i<len;i++,j--){

        t=word[i];
        word[i]=word[j];
        word[j]=t;

        if(word[i]-word[j]!='\0'){
            c++;
        }
        else if(word[i]-word[j]=='\0'){
            c=c;
        }
    }
    word[i]='\0';
    for(i=0;i<len;i++){
    printf("%c\t",word[i]);
    }

    if(c==0){
    printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}
