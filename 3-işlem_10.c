#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
	char ad[10], soyad[10];
	int vz, fnl, dyil;
	printf("Ad�n�z� Giriniz        = "); gets(ad);
	printf("Soyad�n�z� Giriniz     = "); gets(soyad);
	printf("Do�um Y�l�n�z� Giriniz = "); scanf("%d",&dyil);
	printf("Vize Notunuzu Giriniz  = "); scanf("%d",&vz);
	printf("Final Notunuzu Giriniz = "); scanf("%d",&fnl);
	system("cls");
	printf("Ad�n�z          %10s\n",ad);
	printf("Soyad�n�z       %10s\n",soyad);
	printf("Do�um Y�l�n�z   %10d\n",dyil);
	printf("Ya��n�z         %10d\n",2019-dyil);
	printf("Vizeniz         %10d\n",vz);
	printf("Finaliniz       %10d\n",fnl);
	printf("Ortalaman�z     %10.2f",vz*0.4+fnl*0.6);
    getch();
    }
