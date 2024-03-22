#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int s,i1=1,thm;
   srand(time(NULL));
   s=rand()%10; /*0 ile 9 arasý rastgele bir sayý*/
   do
      {
      printf("Tamhininizi Giriniz =");
      scanf("%d",&thm);
      if (s==thm)
         break;
         i1++;
      }      
   while(i1<4);
   printf("Sayý= %d\n",s);
   if (i1<4)
      {
      printf("Tebrikler!\n");
      printf("%d. Tahminde Bildiniz.",i1);
      }
   else
      printf("Bilemediniz!");
   
   getch();
   }
