#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int knr1,knr2,knr3;
	
	printf("1.Kenar�n� giriniz : "); scanf("%d",&knr1);
	printf("2.Kenar�n� giriniz : "); scanf("%d",&knr2);
	printf("3.Kenar�n� giriniz : "); scanf("%d",&knr3);
	
	if (knr1 == knr2 && knr1 == knr3)
	printf("Bu ��gen e�kenar");
	
	else if (knr1 == knr2 || knr1 == knr3 || knr2 == knr3)
	printf("Bu ��gen ikizkenar");

	else
	printf("Bu ��gen �e�itkenar");
	getch();
}
