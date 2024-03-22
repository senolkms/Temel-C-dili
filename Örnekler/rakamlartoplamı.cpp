#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
    {
    setlocale(LC_ALL, "Turkish"); 
 	   
    int s1,i,adet=0;
    
    printf("Sayý giriniz : "); scanf("%d",&s1);

    for(i=1;i<=s1;i++)
    {
    	adet=adet+i;
    }
    printf("%d",adet);    
    getch();
    }
