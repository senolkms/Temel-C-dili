#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1=10,s2=7,sonuc;
    printf("Toplama1 =%d\n",s1+s2);
    printf("��karma1 =%d\n",s1-s2);
    printf("�arpma1  =%d\n",s1*s2);
    printf("B�lme1   =%d\n",s1/s2);
    printf("Kalan1   =%d\n",s1%s2);
    getch();
    system ("cls");
    s1=30;
    s2=20;
    sonuc=s1+s2;
    printf("Toplama2 =%d\n",sonuc);
    sonuc=s1-s2;
    printf("��karma2 =%d\n",sonuc);
    sonuc=s1*s2;
    printf("�arpma2  =%d\n",sonuc);
    sonuc=s1/s2;
    printf("B�lme2   =%d\n",sonuc);
    sonuc=s1%s2;
    printf("Kalan2   =%d\n",sonuc);
    getch();
    }
