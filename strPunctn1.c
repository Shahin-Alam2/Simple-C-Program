#include<stdio.h>
#include<string.h>

int main()
{
   char s[1002];
   int i,j,length,word_start;

    gets(s);
    length=strlen(s);
    printf("String size:%d\n",length);
    word_start=0;

    for(i=0;i<=length;i++){

        if(s[i]>='a'&&s[i]<='z'){
            if(word_start==0){
                word_start=1;
                s[i]='A'+s[i]-'a';
                 printf("%c",s[i]);

            }
            else{

                   printf("%c",s[i]);
            }
        }
       else if(s[i]>='A'&&s[i]<='Z'){
            if(word_start==0){
                word_start=1;

            }

            printf("%c",s[i]);
            }
        else if(s[i]>='0'&&s[i]<='9'){
            if(word_start==0){
                word_start=1;

            }
            printf("%c",s[i]);
            }

        else{
            if(word_start==1){
                word_start=0;
                printf("\n");

            }
        }
    }
     //printf("\n");

    return 0;
}
