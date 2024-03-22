#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1,s2;
    printf("1.sayýyý giriniz: "); scanf("%d",&s1);
    printf("2.sayýyý giriniz: "); scanf("%d",&s2);
    
	s1=s1+s2;
    s2=s1-s2;
    s1=s1-s2;
	printf("Deðiþtirilmiþ hali\n1.Sayý:%d \n2.Sayý:%d",s1,s2);
	getch();
    }
