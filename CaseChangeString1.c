#include<stdio.h>
int main()
{
    int i;
    char word[100];

    gets(word);
    for(i=0;i<100;i++){
       if(word[i]>='a'&&word[i]<='z'){
        word[i]='A'+word[i]-'a';
       }
      else if(word[i]>='A'&&word[i]<='Z'){
        word[i]='a'+word[i]-'A';
       }
    }
    printf("%s\n",word);

    return 0;
}
