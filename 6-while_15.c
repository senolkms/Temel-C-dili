#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int i1=3,toplam=0,adet=0;
    while (i1<=10)
        {
        toplam=toplam+i1;
        adet=adet+1; //adt++;
        i1=i1+3;
        }
    printf("3'�n Kat� Olanlar�n Toplam�    :%d\n",toplam);
    printf("3'�n Kat� Olanlar�n Adedi      :%d\n",adet);
	printf("3'�n Kat� Olanlar�n Ortalamas� :%5.2f\n",(float)toplam/adet);
    getch();
    }
