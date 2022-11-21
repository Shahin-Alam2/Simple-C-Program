#include<stdio.h>
int main()
{
    char c1[6]="Bangla",c2[]="desh",c3[12];
    int i,j,len1=6,len2=4;

    for(i=0,j=0;i<len1;i++,j++){
        c3[j]=c1[i];
    }
    for(i=0;i<len2;i++,j++){     //condition e i<len2 er jaigay c2[i]!='\0' likhleo hobe
        c3[j]=c2[i];
    }
    c3[j]='\0';
    printf("%s\n",c3);

    return 0;
}
