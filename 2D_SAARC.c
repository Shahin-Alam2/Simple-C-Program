#include<stdio.h>
#include<string.h>

int main()
{
    char saarc[7][20]={"Bangladesh","Bhutan","India","Maldives","Nepal","Pakistan","Sri Lanka"};
     int i,j,name_length;

      printf("SAARC countries:\n");
     for(i=0;i<7;i++){
            name_length=strlen(saarc[i]);
        for(j=0;j<name_length;j++){
            printf("%c",saarc[i][j]);
        }
        printf("\n");
     }


    return 0;
}
