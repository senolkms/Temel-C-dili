#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	
   	setlocale(LC_ALL, "Turkish");
   	
   
   	char ad[20],syd[20];
	int vz,fnl,ort,snc;
   
   	printf("Adýnýz		 : "); gets(ad);
   	printf("Soyadýnýz	 : "); gets(syd);
   	printf("Vize Notunuz 	 : "); scanf("%d",&vz);
   	printf("Final Notunuz	 : "); scanf("%d",&fnl);
   	system("cls");
   	printf("%s %4s %4d %4d ",ad,syd,vz,fnl);
	ort=vz*0.4+fnl*0.6;
	
	if (fnl>=60 && ort>=60)
		printf("  Geçti");
	else
		printf("  Kaldý");
   	getch();
}
