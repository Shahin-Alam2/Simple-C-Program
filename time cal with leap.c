#include<stdio.h>
#include<conio.h>
int main()
{
    int y1,m1,d1,h1,mn1,y2,m2,d2,h2,mn2,t,l,y3,m3,d3,h3,mn3;
        char a,ch1,ch2;

      printf("International or Local(AM and PM related) time?\nInput 1st letter:(I/L)\n");
        scanf("%c",&a);

    if(a=='l'||a=='L')
            {
      printf("Enter present time.\nYear:\n");
        scanf("%d",&y1);
      printf("Months:\n");
        scanf("%d",&m1);
      printf("Days:\n");
       scanf("%d",&d1);
      printf("Hours:\n");
       scanf("%d",&h1);
      printf("Minutes:\n");
       scanf("%d",&mn1);
      printf("(AM or PM ?)Input 1st letter:\n");
       scanf("%c",&ch1);
      ch1=getchar();
      printf("\n");

       printf("Enter fixed time.\nYear:\n");
        scanf("%d",&y2);
      printf("Months:\n");
         scanf("%d",&m2);
      printf("Days:\n");
        scanf("%d",&d2);
      printf("Hours:\n");
        scanf("%d",&h2);
      printf("Minutes:\n");
        scanf("%d",&mn2);
      printf("(AM or PM ?)Input 1st letter:\n");
        scanf("%c",&ch2);
     ch2=getchar();
     printf("\n");

       if(ch1==ch2)
         {
    t=((y2-y1)*365*(24*60))+((m2-m1)*(30*24)*60)+((d2-d1)*(24*60))+((h2-h1)*60)+(mn2-mn1);
         y3=t/(365*(24*60));

       if(y3>=4)
       {
          l=y3/4;
         m3=(t-((y3*365)*(24*60)))/(30*(24*60));
         d3=((t-(((y3*365)*(24*60))+((m3*30)*(24*60))))/(24*60))-l;
         h3=(t-(((y3*365)*(24*60))+((m3*30)*(24*60))+((d3+l)*(24*60))))/60;
         mn3=(t%60);
       }
       else
       {
         m3=(t-((y3*365)*(24*60)))/(30*(24*60));
         d3=(t-(((y3*365)*(24*60))+((m3*30)*(24*60))))/(24*60);
         h3=(t-(((y3*365)*(24*60))+((m3*30)*(24*60))+(d3*(24*60))))/60;
         mn3=(t%60);
       }
     printf("%d years %d months %d days %d hours %d minutes remaining.",y3,m3,d3,h3,mn3);
         }

   else if(ch1!=ch2)
         {
    t=((y2-y1)*365*(24*60))+((m2-m1)*(30*24)*60)+((d2-d1)*(24*60))+((12-h1)*60)+(h2*60)+(mn2-mn1);
       y3=t/(365*(24*60));

      if(y3>=4)
       {
         l=y3/4;
         m3=(t-((y3*365)*(24*60)))/(30*(24*60));
         d3=((t-(((y3*365)*(24*60))+((m3*30)*(24*60))))/(24*60))-l;
         h3=(t-(((y3*365)*(24*60))+((m3*30)*(24*60))+((d3+l)*(24*60))))/60;
         mn3=(t%60);
       }
        else
       {
         m3=(t-((y3*365)*(24*60)))/(30*(24*60));
         d3=(t-(((y3*365)*(24*60))+((m3*30)*(24*60))))/(24*60);
         h3=(t-(((y3*365)*(24*60))+((m3*30)*(24*60))+(d3*(24*60))))/60;
         mn3=(t%60);
       }
    printf("%d years %d months %d days %d hours %d minutes remaining.",y3,m3,d3,h3,mn3);
         }

  return 0;
    }

    else if(a=='i'||a=='I')
          {

        printf("Enter present time.\nYear:\n");
          scanf("%d",&y1);
        printf("Months:\n");
          scanf("%d",&m1);
        printf("Days:\n");
          scanf("%d",&d1);
        printf("Hours:\n");
          scanf("%d",&h1);
        printf("Minutes:\n");
          scanf("%d",&mn1);

       printf("Enter fixed time.\nYear:\n");
        scanf("%d",&y2);
        printf("Months:\n");
         scanf("%d",&m2);
        printf("Days:\n");
          scanf("%d",&d2);
        printf("Hours:\n");
          scanf("%d",&h2);
        printf("Minutes:\n");
          scanf("%d",&mn2);

        t=((y2-y1)*365*(24*60))+((m2-m1)*(30*24)*60)+((d2-d1)*(24*60))+((h2-h1)*60)+(mn2-mn1);
         y3=t/(365*(24*60));

      if(y3>=4)
       {
          l=y3/4;
         m3=(t-((y3*365)*(24*60)))/(30*(24*60));
         d3=((t-(((y3*365)*(24*60))+((m3*30)*(24*60))))/(24*60))-l;
         h3=(t-(((y3*365)*(24*60))+((m3*30)*(24*60))+((d3+l)*(24*60))))/60;
         mn3=(t%60);
       }
        else
       {
         m3=(t-((y3*365)*(24*60)))/(30*(24*60));
         d3=(t-(((y3*365)*(24*60))+((m3*30)*(24*60))))/(24*60);
         h3=(t-(((y3*365)*(24*60))+((m3*30)*(24*60))+(d3*(24*60))))/60;
         mn3=(t%60);
       }
         printf("%d years %d months %d days %d hours %d minutes remaining.",y3,m3,d3,h3,mn3);
          }
    else
        printf("You have pressed wrong key.\n(You have not entered I or L)");

  return 0;
}
