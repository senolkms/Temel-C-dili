#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL,"Turkish");
    int i1,sayi,i2,sn=0;
    printf("Say� giriniz: "); scanf("%d",&sayi);
	for (i1=2;i1<=sayi;i1++)
      		{
      	    if (sayi%i1==0)
      	   	 break;
      		}
      	if (sayi==i1)
		  printf("Asald�r");
      	else
		  printf("Asal de�ildir.");
		  

	for(i2=1; i2<sayi; i2++){
		if(sayi%i2==0){
			sn = sn + i2;
		}
	}
	if(sn == sayi){
		printf("\nM�kemmel sayidir\n" );
	}
	else{
		printf("\nM�kemmel sayi degildir\n" );
	}
    }

