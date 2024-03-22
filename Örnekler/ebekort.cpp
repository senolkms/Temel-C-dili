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
		printf("%d .ci sayiyi girin = ",adt++); scanf("%d",&a[i1]);		
		if(a[i1]>eb)
		eb=a[i1];
		if(a[i1]<ek)
		ek=a[i1];
		top=top+a[i1];
	}
	system("cls");
	adt=1;
	for(i1=0;i1<=9;i1++)
	{
		printf("%d.sayi=%d\n",adt++,a[i1]);
	}
		
	printf("En büyük sayý= %d\n",eb);
	printf("En küçük sayý= %d\n",ek);
	printf("Sayýlarýn ortalamasý= %5.2f",(float)top/10);
getch();
}
