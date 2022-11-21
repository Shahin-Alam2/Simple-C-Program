#include<stdio.h>
int main()
{
    int i,j,namta[11][11],odd=0,even=0,sum=0;

    for(i=1;i<=10;i++){

        for(j=1;j<=10;j++){
                namta[i][j]=i*j;
            printf("%d X %d = %d\n",i,j,namta[i][j]);
          sum=sum+namta[i][j];
        if(namta[i][j]%2==0){
            even++;
        }
        else{
            odd++;
        }

        }
        printf("\n");
        j=1;

    }
    printf("Odd numbers:%d\nEven numbers:%d\nSum=%d\n",odd,even,sum);

    return 0;
}
