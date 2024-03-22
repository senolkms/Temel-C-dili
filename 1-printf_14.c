#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    printf("-Selam.");
    printf("-Nasýlsýnýz?-Ýyiyim, teþekkür ederim.");
    getch();
    printf("\n-Selam.\n-Nasýlsýnýz?\n-Ýyiyim, teþekkür ederim.\n");
    getch();
    printf("-Selam.");
    printf("\n");
    printf("-Nasýlsýnýz?");
    printf("\n");
    printf("-Ýyiyim, teþekkür ederim.");
    printf("-Selam\t\tteþekkür ederim.\a");
    getch();
    }
