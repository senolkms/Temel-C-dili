#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main()
{
 setlocale(LC_ALL, "Turkish");
 int s1;
 
 printf("Bir say� giriniz: "); scanf("%d",&s1);
 
 if(s1<0)
 	printf("Say� NEGAT�F");
 	
 else if(s1>0)
 	printf("Say� POZ�T�F");
 	
 else 
 	printf("Say� N�TR");
 	
 getch();
}
