#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int i1,sonuc1=0,sonuc2=0;
    for (i1=1;i1<=10;i1++)
        {
        if (i1%2==1)
           sonuc1=sonuc1+i1;
        else
           sonuc2=sonuc2+i1;
        }
    printf("�ift Say�lar�n Toplam�   :%d\n",sonuc2);
    printf("Tek Say�lar�n Toplam�    :%d\n",sonuc1);
    printf("B�t�n Say�lar�n Toplam�  :%d",sonuc1+sonuc2);
    getch();
    }
