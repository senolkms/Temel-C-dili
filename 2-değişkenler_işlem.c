#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    
    int s,bir,on,yuz;
    printf("3 Basamakl� Bir Say� Giriniz="); scanf("%d",&s); //762
    yuz=s/100; //7
    on=(s%100)/10; //(762%100)/10
    bir=s%10;
    printf("Y�zler Basama��=%d\nOnlar Basama��=%d\nBirler Basama��=%d",yuz,on,bir);
    getch();
    }
