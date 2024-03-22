#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int sayi,r;
	printf("4 basamakli sayiyi giriniz:");
    scanf("%d",&sayi);

   if(sayi>1000 && sayi<9999)
    {
    for(r=0;sayi>0;sayi=sayi/10)
	{
 	r=r*10;
	r=r+sayi%10;
	}
	printf("Sayýnýn tersi= %d", r);
       }
       else
        printf("\n4 basamakli sayi girmediniz...");
     
   getch();
}
  
