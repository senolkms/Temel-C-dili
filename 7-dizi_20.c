#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{	
   	setlocale(LC_ALL, "Turkish");
   	srand(time(NULL));
   
   	int sec,vz[10],fnl[10];
	do
	{
		system("cls");
		printf("1-Toplu Kay�t Atama\n");
		printf("2-Kay�t De�i�tirme\n");		
		printf("3-Kay�t Silme\n");
		printf("4-Vize Final De�i�tir\n");
		printf("5-Kay�t G�r�nt�leme\n");
		printf("6-Toplu Kay�t G�r�nt�leme\n");
		printf("7-��k��\n");
		printf("Se�iminiz (1,2,3,4,5,6,7)=");
		scanf("%d",&sec);
		if (sec==1)
		{
			int i1;
			for (i1=0;i1<=9;i1++)
			{
				vz[i1]=rand()%71+30;
				fnl[i1]=rand()%101;
			}
		}
		else if (sec==2)
		{
			int i1;
			printf("Ka��nc� S�radaki Ki�inin Kayd�n� De�i�tirmek �stiyorsunuz = ");
			scanf("%d",&i1);
			printf("%d. Ki�inin Vize Notunu Giriniz [%d]  = ",i1,vz[i1-1]);
			scanf("%d",&vz[i1-1]);
			printf("%d. Ki�inin Final Notunu Giriniz [%d] = ",i1,fnl[i1-1]);
			scanf("%d",&fnl[i1-1]);
		}
		else if (sec==3)
		{
			int i1,cvp;
			printf("Ka��nc� S�radaki Ki�inin Kayd�n� Silmek �stiyorsunuz = ");
			scanf("%d",&i1);
			printf("%d. Ki�inin Vize Notu  = %d\n",i1,vz[i1-1]);
			printf("%d. Ki�inin Final Notu = %d\n",i1,fnl[i1-1]);
			printf("Silmek �stedi�inizden Emin misiniz? (1-Evet)");
			scanf("%d",&cvp);
			if (cvp==1)
			{
				vz[i1-1]=-1;
				fnl[i1-1]=-1;
			}
		}
		else if (sec==4)
		{
			int i1,tmp;
			printf("Ka��nc� S�radaki Ki�inin Vize Final Notunu De�i�tirmek �stiyorsunuz = ");
			scanf("%d",&i1);
			tmp=vz[i1-1];
			vz[i1-1]=fnl[i1-1];
			fnl[i1-1]=tmp;
		}
		else if (sec==5)
		{
			int i1;
			printf("Ka��nc� S�radaki Ki�inin Kayd�n� G�r�nt�leme �stiyorsunuz = ");
			scanf("%d",&i1);
			printf("%d. Ki�inin Vize Notu  = %d\n",i1,vz[i1-1]);
			printf("%d. Ki�inin Final Notu = %d",i1,fnl[i1-1]);
		}
		else if (sec==6)
		{
			int i1,sr=0;
			printf("SIRA V�ZE F�NAL ORTALAMA DURUM\n");
			printf("---- ---- ----- -------- -----\n");
			for (i1=0;i1<=9;i1++)
			{
				if (vz[i1]>=0 && vz[i1]<=100)
				{
					sr++;
					float ort=vz[i1]*0.4+fnl[i1]*0.6;
					printf("%4d %4d %5d %8.2f ",sr,vz[i1],fnl[i1],ort);
					if (fnl[i1]>=50 && ort>=60)
						printf("GE�T�\n");
					else
						printf("KALDI\n");
				}
			}
		}
		if (sec>=2)
			getch();				
	} while (sec!=7);
}
