#include<stdio.h>
#include<string.h>

int main()
{
   int n,i,j,mark[1];
   char name[10],a[1][1];

   for(i=0;i<2;i++){
    for(j=0;j<=1;j++){
        if(j==0){
            gets(name);
            a[i][j]=name;
            //name[i][j]=name;
        }
        else if(j==1){
  //          scanf("%d",&mark[i][j]);
        //    a[i][j]=mark[i][j];
        }
    }
    printf("name:%s\t%d\n",a[0][0],a[0][1]);
   }
   //printf("%s %d\n",name[1][1],mark[1][1]);


    return 0;
}

