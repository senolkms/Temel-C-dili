#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    int i1,tp=0,adt=0;
    for (i1=1;i1<=10;i1++)
        {
        if (i1%3==0)
           {
           tp=tp+i1; /*+i1 denilirse say�n�n kendisi toplan�r*/
           adt=adt+1; /*+1 denilirse say� 1 artt�r�l�r, yani sayma i�lemi yapar*/
           }
        }
    printf("3'�n Kat� Olanlar�n Toplam� 	:%d\n",tp);
    printf("3'�n Kat� Olanlar�n Adedi   	:%d\n",adt);
    printf("3'�n Kat� Olanlar�n Ortalamas�	:%5.2f\n",(float)tp/adt);
    getch();
    }
