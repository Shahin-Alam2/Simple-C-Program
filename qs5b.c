#include<stdio.h>
#include<string.h>

void func(char str[])
{
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+'a'-'A';
        else if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-'A'+'a';
    }

}
int main()
{
    int i;

    char str[20];
    gets(str);
     i=strlen(str);
    func(str);
    printf("\n%s",str);

    return 0;
}
