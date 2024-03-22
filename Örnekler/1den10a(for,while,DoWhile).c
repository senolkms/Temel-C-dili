#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1,s2;
    printf("Birinci sayýyý giriniz: "); scanf("%d",&s1);
    printf("Ýkinci sayýyý giriniz: "); scanf("%d",&s2);
    s1=s1+s2;
    s2=s1-s2;
    s1=s1-s2;
	printf("deðiþtirilmiþ hali\n1.Sayý:%d \n2.Sayý:%d",s1,s2);
	getch();
    }
