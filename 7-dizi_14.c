#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	
   	setlocale(LC_ALL, "Turkish");
   	srand(time(NULL));
   
   	unsigned short int i1,s[20],adt3=0,tp4=0,adt5=0,tp5=0,eb=0,ek=65536;
   
   	for (i1=0;i1<=19;i1++)
   	{
   		s[i1]=rand()%51;
	}
	
	for(i1=0;i1<=19;i1++)
	{
		if (s[i1]%3==0)
			adt3++;
		if (s[i1]%4==0)
			tp4=tp4+s[i1];
		if (s[i1]%5==0)
		{
			adt5++;
			tp5=tp5+s[i1];
		}		
		if (s[i1]>eb)
			eb=s[i1];
		if (s[i1]<ek)
			ek=s[i1];
	}
	
	printf("3'�n kat� olan say�lar�n say�s�     = %d\n",adt3);
	printf("4'�n kat� olan say�lar�n toplam�    = %d\n",tp4);
	printf("5'in kat� olan say�lar�n ortalamas� = %5.2f\n",(float)tp5/adt5);
	printf("En b�y�k say�                       = %d\n",eb);
	printf("En k���k say�                       = %d\n",ek);
	
   	getch();
}
