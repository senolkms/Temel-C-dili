#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
	
	int i1,s,f=1;
	printf("Say� Giriniz="); scanf("%d",&s);
	for (i1=2;i1<=s;i1++)
	{
		f=f*i1;
		printf("%d say�s�n�n fakt�riyeli %d'dir.\n",i1,f);
	}	
	
	
	getch();
}
