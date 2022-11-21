#include<stdio.h>
int main()
{
    int i,j,c,ara[]={70,71,77,74,75,78,73,79,72,75};

    for(i=70;i<80;i++){
        c=0;
        for(j=0;j<10;j++){
            if(ara[j]==i){
                c++;
            }
        }
        printf("Marks %d\tStudent %d\n",i,c);
    }

    return 0;
}
