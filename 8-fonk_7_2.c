//fGiris; dikd�drtgenin kenar uzunluklar� al�ns�n
//fAlan; alan hesaplan�p yaz�ls�n
//fCevre; �evre hesaplans�n ve sonu� mainDe yaz�ls�n
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int ks, uz;

void fGiris();
void fAlan();
int fCevre();

main(void)
{
	setlocale(LC_ALL, "Turkish");
	fGiris();
	fAlan();
	printf("�evre = %d\n",fCevre());
	getch();
}

void fGiris()
{
   printf("K�sa kenar� giriniz : ");
   scanf("%d",&ks);
   printf("Uzun kenar� giriniz : ");
   scanf("%d",&uz);
}

void fAlan()
{
   printf("Alan = %d\n",ks*uz);
}

int fCevre()
{
   return 2*(ks+uz);
}
