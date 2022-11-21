#include<stdio.h>
int main()
{
    int a,b,n,i,j,grid[10][10],x,y;
    char c;
    printf("Enter initial position:");
    scanf("%d %d",&x,&y);


    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            grid[i][j]=1;
        }
    }
    printf("Number of Blocked cells:");
    scanf("%d",&n);
    printf("Enter Blocked cells:");

    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
            grid[a][b]=0;
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
            if(grid[x-1][y]==0){
            x=x;
        printf("o\t",grid[x][y]);
            }
            else{
                x--;
               printf("o\t",grid[x][y]);
            }
        }
        else if(c=='D'||c=='d'){

            if(grid[x+1][y]==0){
                x=x;
            printf("o\t",grid[x][y]);
            }
            else{
                x++;
               printf("o\t",grid[x][y]);
            }
        }
       else if(c=='L'||c=='l'){
           if(grid[x][y-1]==0){
            y=y;
            printf("o\t",grid[x][y]);
           }
           else{
            y--;
           printf("o\t",grid[x][y]);
           }
        }
       else if(c=='R'||c=='r'){

            if(grid[x][y+1]==0){
                y=y;
            printf("o\t",grid[x][y]);
          }
          else{
            y++;
            printf("o\t",grid[x][y]);
          }
       }
    }
    printf("o\t",grid[x][y]);

    return 0;
}
