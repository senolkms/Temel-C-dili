#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int i1,bas,bts,tp=0,tmp;
   printf("Ba�lang�� De�erini Giriniz =");
   scanf("%d",&bas);
   i1=bas;
   printf("Biti� De�erini Giriniz =");
   scanf("%d",&bts);
   for (;i1<=bts;)
      {
      if (i1%3==0 && i1%5==0)
         tp=tp+i1;
      i1++;
      }
   printf("Hem 3'�n hem de 5'in Kat� Olanlar�n Toplam� :%d\n",tp);
   getch();
   }
