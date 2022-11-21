#include<stdio.h>

int check(int n);

int main()
{
    int i,j,k=0,n,m,c=1,p[100];
    scanf("%d",&m);

    for(n=m;n>0;n--){

        if(n==1){
            break;
        }
       else if(check(n)==1){
            p[c]=n;
           c++;
            //printf("%d Prime\n",n);

        }
        else{
           // printf("%d Not p\n",n);
        }
    }
    printf("Length:%d\n",c-1);

    for(i=1;i<c;i++){
        printf("p %d\n",p[i]);
   }

   int b[100]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for(j=m;j>=2;j--){
            k=j;
        for(i=c-1;i>0;i--){
               // printf("p=%d\n",p[i]);
                for(;;){
                    if(k%p[i]==0){
                        b[i]=b[i]+1;
                        k=k/p[i];
                    }
                    else if(k%p[i]>=1){
                            break;
                    }

                }
        }
    }

        for(i=1;i<c;i++){
        printf("%d\t%d\n",p[i],b[i]);
   }

    return 0;
}

int check(int n){

    int i;
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    for(i=3;i<=n/2;i=i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
