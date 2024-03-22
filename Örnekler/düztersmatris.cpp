#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int s1[2][2],i1,i2;
	printf("\nDüz Matris\n");
	for(i1=0;i1<=1;i1++)
	{
		for(i2=0;i2<=1;i2++)
		{
			s1[i1][i2]=rand()%100-50;
			printf("%4d",s1[i1][i2]);
		}
		printf("\n");
	}
	printf("\nTers Matris\n");
	for(i1=1;i1>=0;i1--)
	{
		for(i2=1;i2>=0;i2--)
		{
			printf("%4d",s1[i1][i2]);
		}
		printf("\n");
	}
getch();
}
