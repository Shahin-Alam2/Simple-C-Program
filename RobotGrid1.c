#include<stdio.h>
int main()
{
    int a,b,n,i,j,grid[10][10]={},x,y;
    char c;
    printf("Enter initial position:");
    scanf("%d %d",&x,&y);

    printf("Number of Blocked cells:");
    scanf("%d",&n);
    printf("Enter Blocked cells:");

    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
            grid[a][b]=1;
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d\t",grid[i][j]);
        }
        printf("\n");
    }

    printf("Command:\n");
     while(1){
        scanf("%c",&c);

        if(c=='S'||c=='s'){
            break;
        }
        else if(c=='U'||c=='u'){
            if(grid[x-1][y]==1){
            x=x;
        printf("1 x:%d y:%d\n",x,y);
            }
            else{
                x--;
                printf("0 x:%d y:%d\n",x,y);
            }
        }
        else if(c=='D'||c=='d'){

            if(grid[x+1][y]==1){
                x=x;
            printf("1 x:%d y:%d\n",x,y);
            }
            else{
                x++;
                printf("0 x:%d y:%d\n",x,y);
            }
        }
       else if(c=='L'||c=='l'){
           if(grid[x][y-1]==1){
            y=y;
            printf("1  x:%d y:%d\n",x,y);
           }
           else{
            y--;
            printf("0  x:%d y:%d\n",x,y);
           }
        }
       else if(c=='R'||c=='r'){

            if(grid[x][y+1]==1){
                y=y;
            printf("1 x:%d y:%d\n",x,y);
          }
          else{
            y++;
            printf("0 x:%d y:%d\n",x,y);
          }
       }
    }
    printf("Final x:%d\ty:%d\n",x,y);

    return 0;
}
