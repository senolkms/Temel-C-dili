#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	int s1[5][6],s2[5][6],i1,i2;
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			s1[i1][i2]=rand()%101+50;
			s2[i1][i2]=rand()%101+50;
		}
	}
	printf("A Matrisi\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s1[i1][i2]);
		}
		printf("\n");
	}
		printf("\nB Matrisi\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s2[i1][i2]);
		}
		printf("\n");
	}
	getch();
	system("cls");
	printf("A Matrisi\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s1[i1][i2]);
		}
		printf("\n");
	}
		printf("\nB Matrisi\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s2[i1][i2]);
		}
		printf("\n");
	}
	printf("\nA Matrisi Pozitif-Negatif\n");
	int adt=0,adt1=0,adt2=0,adt3=0,adt4=0,adt5=0;
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			if(s1[i1][i2]<0)
			{
				printf("NEG ");
				adt++;
			}
				
			else if (s1[i1][i2]>0)
			{
				printf("POZ ");
				adt1++;
			}
				
			else
			{
				printf("NÖTR ");
				adt2++;
			}
				
			
		}printf("\n");
	}
		
		
		printf("\nB Matrisi Pozitif-Negatif\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			if(s2[i1][i2]<0)
			{
				printf("NEG ");
				adt3++;
			}
				
			else if (s2[i1][i2]>0)
			{
				printf("POZ ");
				adt4++;
			}
				
			else
			{
				printf("NÖTR ");
				adt5++;
			}
		}
		printf("\n");
		
	}
	printf("A Matris Toplam:\n%d Poz\n%d Neg\n%d Nötr\n",adt,adt1,adt2);
	printf("B Matris Toplam:\n%d Poz\n%d Neg\n%d Nötr\n",adt3,adt4,adt5);
	getch();
	system("cls");
	
	printf("A Matrisi\n");
	int t=0,t1=0,c=0,c1=0;
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s1[i1][i2]);
		}
		printf("\n");
	}
		printf("\nB Matrisi\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s2[i1][i2]);
		}
		printf("\n");
	}
	printf("\nA Matrisi Tek-Çift\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			if(s1[i1][i2]%2==0)
			{
				printf("Ç ");
				c++;
			}
			else
			{
			printf("T ");
				t++;
			}
				
			
		}
		
		printf("\n");
		
	}
	printf("\nB Matrisi Tek-Çift\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			if(s2[i1][i2]%2==0)
			{
			printf("Ç ");
			c1++;
			}
				
			else
			{
			printf("T ");
			t1++;
			}	
		}printf("\n");		
	}
		printf("A Matris Toplam:\n%d Tek\n%d Çift\n\n",t,c);
		printf("B Matris Toplam:\n%d Tek\n%d Çift",t1,c1);
	getch();
	system("cls");
	printf("A Matrisi\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s1[i1][i2]);
		}
		printf("\n");
	}
		printf("\nB Matrisi\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s2[i1][i2]);
		}
		printf("\n");
	}
	printf("\nA Matrisi Asal \n");
	int asal=0,asal1=0,asal2=0,asal3=0;
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			int i3;
			for (i3=2;i3<=(s1[i1][i2]-1);i3++)
      		{
      	    if (s1[i1][i2]%i3==0)
      	   	 break;
      		}
      	if (s1[i1][i2]==i3)
      	{
		  printf(" 1");
      	  asal++;
		}
      	else
      	{
		  printf(" 0");
    	  asal1++;
		}
		}printf("\n");		
	}
	printf("\nB Matrisi Asal \n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			int i3;
			for (i3=2;i3<=(s2[i1][i2]-1);i3++)
      		{
      	    if (s2[i1][i2]%i3==0)
      	   	 break;
      		}
      	if (s2[i1][i2]==i3)
      	{
		  printf(" 1");
      	  asal2++;
		}
      	
      	else
      	{
		  printf(" 0");
    	  asal3++;
		}
		}printf("\n");	
	}
	printf("A Matris Toplam:\n%d Asal olan\n%d Asal olmayan\n\n",asal,asal1);
	printf("B Matris Toplam:\n%d Asal olan\n%d Asal olmayan",asal2,asal3);
	getch();
	system("cls");
	printf("A Matrisi\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s1[i1][i2]);
		}
		printf("\n");
	}
		printf("\nB Matrisi\n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			printf("%4d",s2[i1][i2]);
		}
		printf("\n");
	}
	printf("\nA Matrisi Mükemmel mi? \n");
	int m=0,m1=0,m2=0,m3=0;
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			int i4,sn;
			sn=0;
      	for (i4=1;i4<=(s1[i1][i2]-1);i4++)
      	{
      	    if (s1[i1][i2]%i4==0)
      	   	 sn=sn+i4;
      	}
      	if (s1[i1][i2]==sn)
      	{
		  printf("1 ");
		  m++; 
		}
      	
		else  
		{
			printf("0 ");
			m1++; 
		}
		  
      }
	  printf("\n");
		}
		
	printf("\nB Matrisi Mükemmel mi? \n");
	for(i1=0;i1<=4;i1++)
	{
		for(i2=0;i2<=5;i2++)
		{
			int i4,sn;
			sn=0;
      	for (i4=1;i4<=(s2[i1][i2]-1);i4++)
      	{
      	    if (s2[i1][i2]%i4==0)
      	   	 sn=sn+i4;
      	}
      	if (s2[i1][i2]==sn)
      	{
		  printf("1 ");
		  m2++;
		}
      	 
		else  
		{
		 printf("0 "); 
		 m3++;
		}
		  
      }
	  printf("\n");
	}
	printf("A Matris Toplam:\n%d Mükemmel olan\n%d Mükemmel olmayan\n\n",m,m1);
	printf("B Matris Toplam:\n%d Mükemmel olan\n%d Mükemmel olmayan",m2,m3);
	
getch();

 
}
