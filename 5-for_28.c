#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
	
	int i1,i2,f;
	for (i1=1;i1<=10;i1++)
	{
		f=1;
		for (i2=2;i2<=i1;i2++)
		{
			f=f*i2;
		}
		printf("%d sayýsýnýn faktöriyeli %d'dir.\n",i1,f);
	}
	
	getch();
}
