#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int topla(int x, int y)
{
	return x+y;
}

void cikar(int x, int y)
{
	printf("Say�lar�n Fark�  = %d\n",x-y);
}

int carp(int x, int y)
{
	return x*y;
}

main(void)
{
	int s1,s2;
	setlocale(LC_ALL, "Turkish");
	printf("1.Say�y� Giriniz  = "); scanf("%d",&s1);
	printf("2.Say�y� Giriniz  = "); scanf("%d",&s2);
	printf("Say�lar�n Toplam� = %d",topla(s1,s2));
	cikar(s1,s2);
	printf("Say�lar�n �arp�m� = %d",carp(s1,s2));
	getch();
}
