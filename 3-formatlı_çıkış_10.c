#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    char c1[]="Selam";
    int s1=123;
    float f1=22.0/7.0;
    printf("String formatlý çýkýþý;\n");
    printf("%s\n",c1);
    printf("%6s\n",c1);
    printf("%.4s\n",c1);
    printf("%7.3s\n",c1);
    printf("%-9s%s\n",c1,c1);
    
    printf("\n\nInteger formatlý çýkýþý;\n");
    printf("%d\n",s1);
    printf("%4d\n",s1);
    printf("%5d\n",s1);
    printf("%-5d%d\n",s1,s1);
    
    printf("\n\nFloat formatlý çýkýþý;\n");
    printf("%f\n",f1);
    printf("s1=%3.2f\n",f1);
    printf("%5.2f\n",f1);
    printf("%-5.2f%4.2f\n",f1,f1);
    getch();
    }
