#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1=13,s2=5;
    float f1=s1/s2; /*f1=13/5=2,6*/
    printf("Sonu�1 =%5.2f\n",f1);
    f1=13/5;
    printf("Sonu�2 =%5.2f\n",f1);
    f1=13/5.0;
    printf("Sonu�3 =%5.2f\n",f1);
    f1=13.0/5.0;
    printf("Sonu�4 =%5.2f\n",f1);
    f1=(float) s1/s2;    
    printf("Sonu�5 =%5.2f\n",f1);
    
    printf("Sonu�6 :(Kalan) =%d\n",s1%s2);
    printf("1. ve 2. Say�y� Giriniz =\n");
    scanf("%d%d",&s1,&s2);
    printf("Sonu�7 =%5.2f",(float) s1/s2);
    getch();
    }
