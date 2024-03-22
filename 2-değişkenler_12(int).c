#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1,s2;
    printf("Birinci Sayýyý Giriniz ="); scanf("%d",&s1);
    printf("Ýkinci Sayýyý Giriniz  ="); scanf("%d",&s2);
    printf("Toplama =%d\n",s1+s2);
    printf("Çýkarma =%d\n",s1-s2);
    printf("Çarpma  =%d\n",s1*s2);
    printf("Bölme   =%d\n",s1/s2);
    printf("Kalan   =%d\n",s1%s2);
    getch();
    }
