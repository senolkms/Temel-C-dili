#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int i1,bas,bts,tp=0,tmp;
   printf("Ba�lang�� Giriniz =");
   scanf("%d",&bas);
   printf("Biti� Giriniz =");
   scanf("%d",&bts);
   for (i1=bas;i1<=bts;i1++)
      {
      if (i1%3==0 && i1%5==0)
         {
          printf("%d\n",i1);
		  tp=tp+i1;
		 }
      }
   printf("Hem 3'�n hem de 5'in Kat� Olanlar�n Toplam� :%d\n",tp);
   getch();
   }
