#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int a[10],i,i1,i2,adt=1,gecici,tut;
	for(i1=0;i1<=9;i1++)
	{
		printf("%d .ci sayiyi girin = ",adt++); scanf("%d",&a[i1]);	
	}
	system("cls");
	for(i1=0;i1<=8;i1++)
       {
           for (i2=i1+1;i2<=9;i2++)
          {
           if (a[i1]<a[i2])
           {
               tut=a[i1];
               a[i1]=a[i2];
               a[i2]=tut;
           }
          }
       }
    printf("\n\nBüyükten küçüðe sýralamasý :");

      for (i2=0;i2<10;i2++)
          printf("\n%d\t",a[i2]);

getch();
}
