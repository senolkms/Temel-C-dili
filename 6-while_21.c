#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    int s;
    setlocale(LC_ALL, "Turkish");
    
       system("cls");
       printf("Say� Giriniz (Negatif Girdi�inizde D�nd� Sonlanacakt�r) =");
       scanf("%d",&s);
       if (s<0)
	   {
	   break;
	   }
          
       printf("\nSay�n�n Karesi = %d",s*s);
       getch();
    
    while (1); /*while (1); �art kontrol�n� hep TRUE alg�lanmas�n� while (0); ise hap FALSE alg�lanmas�n� sa�lar*/
    }
