#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   srand(time(NULL));
   
   int i1,tp=0,s[10];
   
   for (i1=0;i1<=9;i1++)
      {
      s[i1]=rand()%101;
      }
   
   for (i1=0;i1<=9;i1++)
      {
      printf("%3d. Sayý = %3d\n",i1+1,s[i1]);
      }
   
   getch();
   }
