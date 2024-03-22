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
    printf("3'ün Katý Olanlarýn Toplamý    :%d\n",toplam);
    printf("3'ün Katý Olanlarýn Adedi      :%d\n",adet);
	printf("3'ün Katý Olanlarýn Ortalamasý :%5.2f\n",(float)toplam/adet);
    getch();
    }
