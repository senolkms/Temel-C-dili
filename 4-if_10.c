//ya� ile ilgili if �rne�i
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int dyil,yas;
    printf("Do�um y�l�n�z� giriniz =");
	scanf("%d",&dyil);
	yas=2019-dyil;
	printf("Ya��n�z = %d\n",yas);
	if (yas>=20)
		{
		printf("Gen�");
		}
	else if (yas<=10)
		{
		printf("�ocuk");
		}
	else if (yas==15)
		{
		printf("Adam");
		}
    getch();
    }
