#include<stdio.h>
#include<string.h>
int main()
{
    char t,word[80];
    int i,j,len;

    printf("Type a word:");
    scanf("%s",word);

    len=strlen(word);
     printf("%d\n",len);

    for(i=0;i<len;i++){
// printf("%c %c",word[i],word[len-i-1]);
    if(word[i]!=word[len-i-1]){
         printf("Not Palindrome\n");
        break;

      }
    }
    if(i==len){
printf("Palindrome.");
    }
    return 0;
}

