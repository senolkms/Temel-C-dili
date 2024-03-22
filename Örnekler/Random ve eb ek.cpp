#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
main(void)
{
	
   	setlocale(LC_ALL, "Turkish");
   	srand(time(NULL));
   	int s[5],i1,eb=0,ek=100,adt=1;
   	
   	for (i1=0;i1<=5;i1++)
   	{
   		s[i1]=rand()%40-20;
   		printf("%d.Sayý:%d\n",adt++,s[i1]);
	}
	for(i1=0;i1<=5;i1++)
	{
			
		if (s[i1]>eb)
			eb=s[i1];
		if (s[i1]<ek)
			ek=s[i1];
	}
	printf("\nEn büyük: %d\n",eb);
	printf("En küçük: %d",ek);
}
