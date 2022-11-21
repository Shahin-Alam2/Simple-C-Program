#include<stdio.h>
int main()
{
    double marks[4][10];  /* ={
                       {80,99,92,78,58,83,85,66,79,81},
                       {75,90,55,100,91,84,79,61,87,97},
                       {98,88,75,89,81,83,80,90,95,77},
                       {0,0,0,0,0,0,0,0,0,0}
                     };
                   //  printf("%d\n",marks[1][9]); */
     int row,col;
     printf("Enter all marks(1st term of all student then 2nd and then 3rd):\n");
     for(row=0;row<3;row++){
       for(col=0;col<10;col++){
              scanf("%lf",&marks[row][col]);
          }
    }
       printf("\n");
       for(col=0;col<10;col++){
        marks[3][col]=marks[0][col]/4.0+marks[1][col]/4.0+marks[2][col]/2.0;
         printf("Final marks of Roll %d is %0.2lf\n",col+1,marks[3][col]);
     }

    return 0;
}
