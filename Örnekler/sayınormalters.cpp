#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	int a[10],i1,adt=1,eb=0,ek=100,top;
	for(i1=0;i1<=9;i1++)
	{
		printf("%3d.ci sayiyi girin = ",adt++); scanf("%d",&a[i1]);		
		if(a[i1]>eb)
		eb=a[i1];
		if(a[i1]<ek)
		ek=a[i1];
		top=top+a[i1];
	}
	system("cls");
	adt=1;
	
	printf("Normal\n");
	for(i1=0;i1<=9;i1++)
	{
		
		printf("%3d.sayi=%d\n",adt++,a[i1]);
	}
	
	printf("\nTers\n");
	adt=10;
	for(i1=9;i1>=0;i1--)
	{
		printf("%3d.sayi=%d\n",adt--,a[i1]);
	}
		

getch();
}
