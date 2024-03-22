#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
   {
   setlocale(LC_ALL, "Turkish");
   int sayi,i;
	printf("4 basamakli sayiyi giriniz:");
    scanf("%d",&sayi);

   if(sayi>1000 && sayi<9999)
    {
    for(i=0;sayi>0;sayi=sayi/10)
	{
 	i=i*10;
	i=i+sayi%10;
	}
	printf("Sayýnýn tersi= %d", i);
       }
       else
        printf("\n4 basamakli sayi girmediniz...");
     
   getch();
}
  
