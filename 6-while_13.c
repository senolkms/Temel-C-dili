#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int i1=1,sonuc=0;
    while (i1<=10)
       {
       sonuc=sonuc+i1;
       i1=i1+2;
       }
    printf("Sonuc=%d",sonuc);
    getch();
    }
