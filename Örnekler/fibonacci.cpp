#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    int x=0,y=1,sayi,i,degisken;
		setlocale(LC_ALL,"Turkish");
         printf("Girce�iniz de�er?:");
         scanf("%d",&sayi);
         printf("%d  ",x);
         printf("%d  ",y);
         for(i=0;i<sayi-2;++i)
         {
            printf("\n%d ",x+y);
             degisken=x;
             x=y;
             y=degisken+y;
         }

    getch();
    }
