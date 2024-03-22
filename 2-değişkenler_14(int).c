#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int dYil;
    printf("Doðum Yýlýnýzý Giriniz = "); scanf("%d",&dYil);
    system("cls");
    printf("%d yýlýnda doðduðunuza göre yaþýnýz %d dir.",dYil,2019-dYil);
    getch();
    }
