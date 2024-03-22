#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1;
    short int s2;
    unsigned short int s3; /*signed, unsigned, long, short*/
    printf("s1 deðiþkeni;\n");
    s1=321;
    printf("%d\n",s1);
    s1=33000;
    printf("%d\n",s1);
    s1=-321;
    printf("%d\n",s1);
    printf("\ns2 deðiþkeni;\n");
    s2=321;
    printf("%d\n",s2);
    s2=33000;
    printf("%d\n",s2);
    s2=-321;
    printf("%d\n",s2);
    printf("\ns3 deðiþkeni;\n");
    s3=321;
    printf("%d\n",s3);
    s3=33000;
    printf("%d\n",s3);
    s3=-321;
    printf("%d\n",s3);
    getch();
    }
