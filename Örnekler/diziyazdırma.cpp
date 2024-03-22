#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int a[10],i1,adt=1,i;
	for(i1=0;i1<=9;i1++)
	{
		printf("%d .ci sayiyi girin = ",adt++); scanf("%d",&a[i1]);	
	}
	system("cls");
	adt=1;
	for(i1=0;i1<=9;i1++)
		printf("%d.sayý= %d\n",adt++,a[i1]);
getch();
}
