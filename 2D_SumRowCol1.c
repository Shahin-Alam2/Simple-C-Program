#include<stdio.h>
int main()
{
    int table[5][5]={
                     {6,4,7,8,9},
                     {3,7,1,9,9},
                     {8,6,4,2,7},
                     {2,4,2,5,9},
                     {4,1,6,7,3},
                 };
       int row,col,Sum_Row=0,Sum_Col=0;

       for(row=0;row<5;row++){

           for(col=0;col<5;col++){

            Sum_Row=Sum_Row+table[row][col];
            Sum_Col=Sum_Col+table[col][row];
           }

           printf("Sum of Row %d : %d\n",row+1,Sum_Row);
           printf("Sum of Col %d : %d\n",row+1,Sum_Col);
           Sum_Row=0;
           Sum_Col=0;
           printf("\n");
       }


    return 0;
}
