#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    char ad[10],sad[10];
    int cns,vz,fnl;
    float ort;
    printf("Ad�n�z� Giriniz\t\t: "); gets(ad);
    printf("Soyad�n�z� Giriniz\t: "); gets(sad);
    printf("Cinsiyetinizi Giriniz\t: "); scanf("%d",&cns);
    printf("Vize Notunuzu Giriniz\t: "); scanf("%d",&vz);
    printf("Final Notunuzu Giriniz\t: "); scanf("%d",&fnl);
    ort=vz*0.4+fnl*0.6;
    system("cls");
    printf("Ad�n�z\t\t: %s\n",ad);
    printf("Soyad�n�z\t: %s\n",sad);
    if (cns==1)
       {
       printf("Cinsiyetiniz\t: Erkek\n");
       }
    else
       {
       printf("Cinsiyetiniz\t: Kad�n\n");
       }
    printf("Vize Notunuz\t: %d\n",vz);
    printf("Final Notunuz\t: %d\n",fnl);
    printf("Ortalaman�z\t: %5.2f\n",ort);
    if (ort>=60 && fnl>=50)
       {
       printf("Durumunuz\t: Ge�ti");
       }
    else
       {
       printf("Durumunuz\t: Kald�");
       }
    getch();
    }
