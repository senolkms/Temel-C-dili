#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void topla(int s1, int s2)
{
	printf("Say�lar�n Toplam� = %d\n",s1+s2);
}

void cikar(int s1, int s2)
{
	printf("Say�lar�n Fark�   = %d\n",s1-s2);
}

main(void)
{
	int s1,s2;
	setlocale(LC_ALL, "Turkish");
	printf("1.Say�y� Giriniz = "); scanf("%d",&s1);
	printf("2.Say�y� Giriniz = "); scanf("%d",&s2);
	topla(s1,s2);
	cikar(s1,s2);
	getch();
}
