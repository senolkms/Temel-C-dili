#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Islem(int s1)
{
	return 2*s1;
}

main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s1;
	printf("Say� Giriniz = ");
	scanf("%d",&s1);
	printf("Say�n�n 2 Kat� = %d",Islem(s1));
	getch();
}
