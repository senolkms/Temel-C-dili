#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void topla(int x, int y)
{
	printf("Say�lar�n Toplam� = %d\n",x+y);
}

void cikar(int x, int y)
{
	printf("Say�lar�n Fark�  = %d\n",x-y);
}

void carp(int x, int y)
{
	printf("Say�lar�n �arp�m� = %d\n",x*y);
}

main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s1,s2;
	printf("1.Say�y� Giriniz  = "); scanf("%d",&s1);
	printf("2.Say�y� Giriniz  = "); scanf("%d",&s2);
	topla(s1,s2);
	cikar(s1,s2);
	carp(s1,s2);
	getch();
}
