#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
    int bolum,bolunen,bolen,kalan;
    printf("Böleni gireniz: "); scanf("%d",&bolen);
    printf("Bölünen giriniz: "); scanf("%d",&bolunen);
    
    bolum=bolen/bolunen;
    kalan=bolen%bolunen;
    printf("\nBölüm:%d\nKalan:%d",bolum,kalan);
    getch();
}

