#include<stdio.h>
int main()
{
    int x,y;
    char c;

    scanf("%d %d",&x,&y);

    while(1){
        scanf("%c",&c);

        if(c=='S'||c=='s'){
            break;
        }
        else if(c=='U'||c=='u'){
            x--;
        }
        else if(c=='D'||c=='d'){
            x++;
        }
        else if(c=='L'||c=='l'){
            y--;
        }
        else if(c=='R'||c=='r'){
            y++;
        }
    }
    printf("x:%d y:%d\n",x,y);


    return 0;
}
