#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int bas,bts,tp=0,tmp;
   printf("Ba�lang�� De�erini Giriniz =");
   scanf("%d",&bas);
   printf("Biti� De�erini Giriniz =");
   scanf("%d",&bts);
   for (i1=bas;i1<=bts;i1++)
      {
      if (bas%3==0 && bas%5==0)
         tp=tp+i1;
      }
   printf("Hem 3'�n hem de 5'in Kat� Olanlar�n Toplam� :%d\n",tp);
   getch();
   }
