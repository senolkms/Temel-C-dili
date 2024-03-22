#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1=13,s2=5;
    float f1=s1/s2; /*f1=13/5=2,6*/
    printf("Sonuç1 =%5.2f\n",f1);
    f1=13/5;
    printf("Sonuç2 =%5.2f\n",f1);
    f1=13/5.0;
    printf("Sonuç3 =%5.2f\n",f1);
    f1=13.0/5.0;
    printf("Sonuç4 =%5.2f\n",f1);
    f1=(float) s1/s2;    
    printf("Sonuç5 =%5.2f\n",f1);
    
    printf("Sonuç6 :(Kalan) =%d\n",s1%s2);
    printf("1. ve 2. Sayýyý Giriniz =\n");
    scanf("%d%d",&s1,&s2);
    printf("Sonuç7 =%5.2f",(float) s1/s2);
    getch();
    }
