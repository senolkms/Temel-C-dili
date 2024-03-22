#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
	char ad[10], soyad[10];
	int vz, fnl, dyil;
	printf("Adýnýzý Giriniz        = "); gets(ad);
	printf("Soyadýnýzý Giriniz     = "); gets(soyad);
	printf("Doðum Yýlýnýzý Giriniz = "); scanf("%d",&dyil);
	printf("Vize Notunuzu Giriniz  = "); scanf("%d",&vz);
	printf("Final Notunuzu Giriniz = "); scanf("%d",&fnl);
	system("cls");
	printf("Adýnýz          %10s\n",ad);
	printf("Soyadýnýz       %10s\n",soyad);
	printf("Doðum Yýlýnýz   %10d\n",dyil);
	printf("Yaþýnýz         %10d\n",2019-dyil);
	printf("Vizeniz         %10d\n",vz);
	printf("Finaliniz       %10d\n",fnl);
	printf("Ortalamanýz     %10.2f",vz*0.4+fnl*0.6);
    getch();
    }
