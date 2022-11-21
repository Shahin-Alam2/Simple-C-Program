#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0,s=1000000,a[5],b[5],man[5];
     char name[10][10],nam[10];

     for(i=0;i<5;i++){
     scanf("%d",&a[i]);
     //scanf("%s",name[i]);
     }
     printf("Enter name:\n");
    for(i=0;i<5;i++){
        scanf("%s",name);
        nam[i]=name[i];
    }

    for(i=0;i<5;i++){

        for(j=0;j<5;j++){
            if(s>a[j]){
              s=a[j];
              k=j;
         }
     }
        b[i]=s;
        a[k]=1000000 ;
        s=1000000;

    }

    for(i=0;i<5;i++){
    printf("%d\t",b[i]);
    printf("%c\n",name[i]);
    }
    return 0;
}
