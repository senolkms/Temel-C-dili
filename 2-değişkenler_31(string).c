#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    char c1[]="selam "; //*c1="Selam"
    printf("%s\n",c1);
    printf("%c",c1[3]);
    getch();
    }
