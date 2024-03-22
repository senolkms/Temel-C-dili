#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
    {
    setlocale(LC_ALL, "Turkish");
    
    int s1,faktor=1,i;
    
    printf("Sayý giriniz : "); scanf("%d",&s1);
    
    for(i=1;s1>=i;i++)
    {
    	faktor=faktor*i;
	}
     printf("%d!=%d",s1,faktor);
     getch();
    }
