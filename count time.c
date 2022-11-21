#include<stdio.h>
#include<conio.h>
int main()
{
    int d1,h1,m1,d2,h2,m2,t,d3,h3,m3;
        char a,ch1,ch2;
      printf("International or Local time?\nInput 1st letter:(I/L)\n");
        scanf("%c",&a);

        if(a=='l'||a=='L')
            {
      printf("Enter present time.\nDate:\n");
       scanf("%d",&d1);
      printf("Hours:\n");
       scanf("%d",&h1);
      printf("Minutes:\n");
       scanf("%d",&m1);
      printf("(AM or PM ?)Input 1st letter:\n");
       scanf("%c",&ch1);
      ch1=getchar();
      printf("\n");

      printf("Enter fixed time.\nDate:\n");
        scanf("%d",&d2);
      printf("Hours:\n");
        scanf("%d",&h2);
      printf("Minutes:\n");
        scanf("%d",&m2);
      printf("(AM or PM ?)Input 1st letter:\n");
        scanf("%c",&ch2);
     ch2=getchar();
     printf("\n");

       if(ch1==ch2)
         {
    t=((d2-d1)*(24*60))+((h2-h1)*60)+(m2-m1);
       d3=t/(24*60);
       h3=(t-(d3*(24*60)))/60;
       m3=(t%60);
     printf("%d days %d hours %d minutes remaining.",d3,h3,m3);
         }

   else if(ch1!=ch2)
         {
    t=((d2-d1)*(24*60))+((12-h1)*60)+(h2*60)+(m2-m1);
     d3=t/(24*60);
     h3=(t-(d3*(24*60)))/60;
     m3=(t%60);
    printf("%d days %d hours %d minutes remaining.",d3,h3,m3);
         }

  return 0;
    }

    else if(a=='i'||a=='I')
          {
        printf("Enter present time:\nDate:\n");
          scanf("%d",&d1);
        printf("Hours:\n");
          scanf("%d",&h1);
        printf("Minutes:\n");
          scanf("%d",&m1);
        printf("Enter fixed time:\nDate:\n");
          scanf("%d",&d2);
        printf("Hours:\n");
          scanf("%d",&h2);
        printf("Minutes:\n");
          scanf("%d",&m2);

        t=((d2-d1)*(24*60))+((h2-h1)*60)+(m2-m1);
         d3=t/(24*60);
         h3=(t-(d3*(24*60)))/60;
         m3=(t%60);
         printf("%d days %d hours %d minutes remaining.",d3,h3,m3);
          }
    else
        printf("You have pressed wrong key.\n(You have not entered I or L)");

  return 0;
}
