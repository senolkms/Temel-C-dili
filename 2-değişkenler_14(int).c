#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int dYil;
    printf("Do�um Y�l�n�z� Giriniz = "); scanf("%d",&dYil);
    system("cls");
    printf("%d y�l�nda do�du�unuza g�re ya��n�z %d dir.",dYil,2019-dYil);
    getch();
    }
