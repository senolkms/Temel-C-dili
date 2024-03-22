#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int s,i1=1,thm;
   srand(time(NULL));
   s=rand()%10+1; /*1 ile 10 arasý rastgele bir sayý*/
   do
      {
      printf("Tamhininizi Giriniz =");
      scanf("%d",&thm);
      if (s==thm)
         break;
      i1++;
      }      
   while(thm!=0);
   printf("Sayý= %d\n",s);
   if (thm!=0)
      {
      printf("Tebrikler!\n");
      printf("%d. Tahminde Bildiniz.",i1);
      }
   else
      printf("Bilemediniz!");
   
   getch();
   }
