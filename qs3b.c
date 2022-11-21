#include<stdio.h>

void pointer(int *point)
{
    int i;
    for(i=0;i<10;i++){
        printf("%3d",*point);
        point++;
    }
}

int main()
{
    int i;
    int num[10]={0,1,2,3,4,5,6,7,8,9};
    pointer(num);
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%3d",num[i]);
    }

    return 0;
}
