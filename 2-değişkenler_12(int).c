#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1,s2;
    printf("Birinci Say�y� Giriniz ="); scanf("%d",&s1);
    printf("�kinci Say�y� Giriniz  ="); scanf("%d",&s2);
    printf("Toplama =%d\n",s1+s2);
    printf("��karma =%d\n",s1-s2);
    printf("�arpma  =%d\n",s1*s2);
    printf("B�lme   =%d\n",s1/s2);
    printf("Kalan   =%d\n",s1%s2);
    getch();
    }
