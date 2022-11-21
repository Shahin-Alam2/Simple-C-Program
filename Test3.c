#include<stdio.h>
#include<string.h>
int main()
{
   /* int a,b,value;
    value=scanf("%d%d",&a,&b);
    printf("Value:%d\n",value); */

   /* char a[]={};
    scanf("%s",a);
    printf("%s",a);
    */
    int i,j,a[5];
    char n[5][100];

    for(i=0;i<5;i++){
            //for(j=0;;j++){
            printf("Name:\n");
           gets(n[i]);
           printf("i1=%d\n",i);
           printf("Number:\n");
           scanf("%d",&a[i]) ;
           printf("i2=%d\n",i);
       //}
      // n[i][j]='\0';
    }
    for(i=0;i<5;i++){
            for(j=0;;j++){
            if(n[i][j]=='\0'){
                break;
            }
        printf("%c",n[i][j]);
       }
       printf("\t%d",a[i]);
       printf("\n");
    }

    return 0;
}
