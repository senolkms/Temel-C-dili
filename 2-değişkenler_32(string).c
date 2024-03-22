#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    char c1[10],c2[10];
    printf("String1 giriniz : "); scanf("%3c",c1);
    printf("%s",c1);
    getch();
    system ("cls");
    printf("String2 giriniz : "); scanf("%s",c2);
    printf("%s",c2);
    getch();
    }
