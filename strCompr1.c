#include<stdio.h>

int string_length(char len[]);
int string_cmpr(char a[],char b[]);

int string_length(char len[]){

    int i=0;
    while(len[i]!='\0'){
        i++;
    }
    return i;
}

int string_cmpr(char a[],char b[]){

    int i,j;
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++){
        if(a[i]<b[i]){
            return -1;
        }
        if(a[i]>b[i]){
            return 1;
        }
    }
    if(string_length(a)<string_length(b)){
        return -1;
    }
    if(string_length(a)==string_length(b)){
        return 0;
    }
    if(string_length(a)>string_length(b)){
        return 1;
    }
}

int main()
{
    char a[]="aaa",b[]="aab";
    int i,n;

    i=string_length(a);
    n=string_cmpr(a,b);

    if(n==-1){
        printf("a[%d] is smaller to b[%d]\n",i,i);
    }
    if(n==0){
    printf("a[%d] is equal to b[%d]\n",i,i);
    }
    if(n==1){
        printf("a[%d] is greater to b[%d]\n",i,i);
    }

    return 0;
}
