#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Islem(void)
{
	int s1;
	printf("Say� Giriniz = ");
	scanf("%d",&s1);
	printf("Say�n�n 2 Kat� = %d",2*s1);
}

main(void)
{
	setlocale(LC_ALL, "Turkish");
	Islem();
	getch();
}
