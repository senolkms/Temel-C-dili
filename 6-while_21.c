#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    int s;
    setlocale(LC_ALL, "Turkish");
    
       system("cls");
       printf("Sayý Giriniz (Negatif Girdiðinizde Döndü Sonlanacaktýr) =");
       scanf("%d",&s);
       if (s<0)
	   {
	   break;
	   }
          
       printf("\nSayýnýn Karesi = %d",s*s);
       getch();
    
    while (1); /*while (1); þart kontrolünü hep TRUE algýlanmasýný while (0); ise hap FALSE algýlanmasýný saðlar*/
    }
