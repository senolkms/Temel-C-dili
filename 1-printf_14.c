#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    printf("-Selam.");
    printf("-Nas�ls�n�z?-�yiyim, te�ekk�r ederim.");
    getch();
    printf("\n-Selam.\n-Nas�ls�n�z?\n-�yiyim, te�ekk�r ederim.\n");
    getch();
    printf("-Selam.");
    printf("\n");
    printf("-Nas�ls�n�z?");
    printf("\n");
    printf("-�yiyim, te�ekk�r ederim.");
    printf("-Selam\t\tte�ekk�r ederim.\a");
    getch();
    }
