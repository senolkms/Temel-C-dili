#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int i1=1,sonuc1=0,sonuc2=0;
    while (i1<=10)
        {
        if (i1%2==1)
           sonuc1=sonuc1+i1;
        else
           sonuc2=sonuc2+i1;
        i1++;
        }
    printf("�ift Say�lar�n Toplam� :%d\n",sonuc2);
    printf("Tek Say�lar�n Toplam�  :%d",sonuc1);
    getch();
    }
