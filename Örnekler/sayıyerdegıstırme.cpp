#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1,s2;
    printf("1.say�y� giriniz: "); scanf("%d",&s1);
    printf("2.say�y� giriniz: "); scanf("%d",&s2);
    
	s1=s1+s2;
    s2=s1-s2;
    s1=s1-s2;
	printf("De�i�tirilmi� hali\n1.Say�:%d \n2.Say�:%d",s1,s2);
	getch();
    }
