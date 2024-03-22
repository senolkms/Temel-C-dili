#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int vz, fnl;
    printf("Vize Notunuzu Giriniz = "); scanf("%d",&vz);
    printf("Final Notunuzu Giriniz = "); scanf("%d",&fnl);
    printf("Ortalamanýz = %.2f",vz*0.4+fnl*0.6);
    getch();
    }
