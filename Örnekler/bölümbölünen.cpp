#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
    int bolum,bolunen,bolen,kalan;
    printf("B�leni gireniz: "); scanf("%d",&bolen);
    printf("B�l�nen giriniz: "); scanf("%d",&bolunen);
    
    bolum=bolen/bolunen;
    kalan=bolen%bolunen;
    printf("\nB�l�m:%d\nKalan:%d",bolum,kalan);
    getch();
}

