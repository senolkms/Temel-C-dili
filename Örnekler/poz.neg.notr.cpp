#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main()
{
 setlocale(LC_ALL, "Turkish");
 int s1;
 
 printf("Bir sayý giriniz: "); scanf("%d",&s1);
 
 if(s1<0)
 	printf("Sayý NEGATÝF");
 	
 else if(s1>0)
 	printf("Sayý POZÝTÝF");
 	
 else 
 	printf("Sayý NÖTR");
 	
 getch();
}
