#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int i1,sonuc=0; /*sonuc=0 yap�lmas�n�n sebebi 0'�n toplamaya g�re etkisiz olmas�ndand�r*/
    for (i1=1;i1<=10;i1++)
        sonuc=sonuc+i1;
    printf("Sonu�      :%d",sonuc);
    getch();
    }
