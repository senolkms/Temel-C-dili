#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s[5], s1,s2,s3,s4,s5, tp1=0, tp2=0;
    printf("1.say� giriniz = "); scanf("%d",&s1);
	printf("2.say� giriniz = "); scanf("%d",&s2);
	printf("3.say� giriniz = "); scanf("%d",&s3);
	printf("4.say� giriniz = "); scanf("%d",&s4);
	printf("5.say� giriniz = "); scanf("%d",&s5);
	tp1=s1+s2+s3+s4+s5;
	printf("say�lar�n toplam� = %d",tp1);
	
	printf("\n");
	printf("1.say� giriniz = "); scanf("%d",&s[0]);
	printf("2.say� giriniz = "); scanf("%d",&s[1]);
	printf("3.say� giriniz = "); scanf("%d",&s[2]);
	printf("4.say� giriniz = "); scanf("%d",&s[3]);
	printf("5.say� giriniz = "); scanf("%d",&s[4]);
	tp2=s[0]+s[1]+s[2]+s[3]+s[4];
	printf("say�lar�n toplam� = %d",tp2);
    getch();
    }
