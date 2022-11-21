#include<stdio.h>
#include<string.h>

int main()
{
    char bin[10];
    int deci=13,d=0,i,j,n=0,s,p=0;

    while(s>0){
        n++;
        s=deci/2;
        deci=s;
    if((s==0)||(s==1)){
        break;
       }
    }
    printf("n=%d\n",n);
    for(i=n,j=0;i>=0;i--,j++){
        p=pow(2,i);
        d=d+p;

        printf("%d %d\n",i,d);

         if(j==n){
            bin[j+1]='\0';
            break;
        }

        else if(d>deci){
            d=d-p;
            //printf("0 hole %d\n",d);
            bin[j]='0'-'0';
        }

       else{
            bin[j]='1'-'0';
            printf("1 hole %d",d);
        }


        printf("bin=%d\n",bin[j]);
    }
    printf("%s\n",bin);


    return 0;
}
