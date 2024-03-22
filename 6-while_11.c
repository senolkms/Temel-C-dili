#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    int i1=1;
    setlocale(LC_ALL, "Turkish");
    while (i1<=3)
       {
       printf("%d\n",i1);
       i1++;
       }
    getch();
    }
