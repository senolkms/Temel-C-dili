#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int s1;
    printf("Bir Say� Giriniz    :"); scanf("%d",&s1);
    if (s1%2==0)
       {
       printf("Girilen Say� �ifttir.");
       }
    else /*else if (s1%2==1)*/
        {printf("Girilen Say� Tektir.");}
    getch();
    }
