#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s[5],i1,tp1=0;
	
	for (i1=0;i1<=4;i1++)
	{
		printf("%d.Say� Giriniz = ",i1+1);
		scanf("%d",&s[i1]);
		tp1=tp1+s[i1];
	}
	printf("Say�lar�n Toplam� = %d",tp1);
		
	getch();
}
