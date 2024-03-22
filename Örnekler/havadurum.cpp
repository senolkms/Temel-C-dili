#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
int main ()
{
setlocale(LC_ALL,"Turkish");
int a[30][3],i1,i2,syc=1;
srand(time(NULL));
	for(i1=0;i1<=29;i1++)
	{
		printf("%d.Gün\n",syc++);
		
		for(i2=0;i2<=2;i2++)
		{
			if(i2==0)
			printf("Sabah");
			if(i2==1)
			printf("Öðle ");
			if(i2==2)
			printf("Akþam");
			printf(" = %4d \n",a[i1][i2]=rand()%41-10);
			
	    }printf("\n \n");
		
	}
getch();
}
