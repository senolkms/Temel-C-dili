#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    
    int s,bir,on,yuz;
    printf("3 Basamaklý Bir Sayý Giriniz="); scanf("%d",&s); //762
    yuz=s/100; //7
    on=(s%100)/10; //(762%100)/10
    bir=s%10;
    printf("Yüzler Basamaðý=%d\nOnlar Basamaðý=%d\nBirler Basamaðý=%d",yuz,on,bir);
    getch();
    }
