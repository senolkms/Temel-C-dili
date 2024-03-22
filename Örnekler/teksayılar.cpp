#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
    {
    setlocale(LC_ALL, "Turkish");
    
    int s1,s2,i1;
    
    printf("1. sayýyý giriniz :"); scanf("%d",&s1);
    printf("2. sayýyý giriniz :"); scanf("%d",&s2);
    
    for (i1=s1;i1<=s2;i1++)
    {
    	if(i1%2==1)
    	
    	printf("%d \n",i1);
	}
    getch();
    }
