#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
    {
    setlocale(LC_ALL, "Turkish"); 

    int s1,i1,syc,ort;

    for(i1=1;;i1++)
    {
        printf("say� giriniz = "); scanf("%d",&s1);
       
           if(s1<0)
         break;
        syc=syc+s1;
        ort=syc/i1;
    }
    
    printf("Say�lar�n ortalamas� %d",ort);
    getch();
    }
