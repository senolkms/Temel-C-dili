#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
	char ad[10], soyad[10];
	int vz,fnl;
	float ort;
    printf("Ad�n�z 		="); gets(ad);
	printf("Soyad�n�z	="); gets(soyad);
	printf("Vizeniz		="); scanf("%d",&vz);
	printf("Finaliniz	="); scanf("%d",&fnl);
	system("cls");
    printf("Ad�n�z 		=%10s\n",ad);
	printf("Soyad�n�z	=%10s\n",soyad);
	printf("Vizeniz		=%10d\n",vz);
	printf("Finaliniz	=%10d\n",fnl);
	ort=vz*0.4+fnl*0.6;
	printf("Ortalaman�z	=%10.2f\n",ort);
	if (fnl>=50 && ort>=60)
 	  printf("Durumunuz	=%10s","Ge�ti");
	else
	   printf("Durumunuz	=%10s","Kald�");
    getch();
    }
