#include<stdio.h>
int main()
{
    FILE *fp_Bangla,*fp_English,*fp_Math,*fp_Average;
    char *input_Bangla="C:\\Users\\Lenovo\\Desktop\\Programing\\C\\Subeen\\Book2\\File Program\\Input from Files\\Bangla.txt";
    char *input_English="C:\\Users\\Lenovo\\Desktop\\Programing\\C\\Subeen\\Book2\\File Program\\Input from Files\\English.txt";
    char *input_Math="C:\\Users\\Lenovo\\Desktop\\Programing\\C\\Subeen\\Book2\\File Program\\Input from Files\\Math.txt";
    char *output_Avreage="C:\\Users\\Lenovo\\Desktop\\Programing\\C\\Subeen\\Book2\\File Program\\Input from Files\\Average.txt";

    int i,j,roll[10],n=10,Bangla[10],English[10},Math[10];

    fp_Bangla=fopen(input_Bangla,"r");
    fp_English=fopen(input_English,"r");
    fp_Math=fopen(input_Math,"r");
    fp_Average=fopen(output_Avreage,"w");

    for(i=0;i<n;i++){
        sscanf(line,"%d%d",&roll[i],&Bangla[10]);
    }


    return 0;
}
