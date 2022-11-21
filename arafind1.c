#include<stdio.h>
int main()
{
    int student,high=0,low=100,i,j,marks_of_students[100]={},marks[101];
     printf("Total student:");
     scanf("%d",&student);
     printf("Enter all marks:\n");

    for(j=0;j<student;j++){
       scanf("%d",&marks_of_students[j]);

       if(low>marks_of_students[j]){
        low=marks_of_students[j];
       }
       if(high<marks_of_students[j]){
        high=marks_of_students[j];
       }
    }

    for(i=0;i<101;i++){
        marks[i]=0;
    }
    for(i=0;i<student;i++){
        marks[marks_of_students[i]]++;
    }
    for(i=low;i<=high;i++){
            if(marks[i]==0){

            }
            else{
        printf("Marks: %d\tStudent:%d\n",i,marks[i]);
            }
    }

    return 0;
}
