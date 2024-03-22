#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
	
	int i1;
	printf("Sayý   Yarýsý   2 Katý   Karesi\n");
	for (i1=1;i1<=10;i1++)
	{
		printf("%4d   %6.1f   %6d   %6d\n",i1,(float)i1/2,2*i1,i1*i1);
	}
	
	getch();
}
