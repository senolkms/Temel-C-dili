#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int miktar,kalan,ikiyuz,yuz,elli,yirmi,on,bes,bir;
	printf("Para miktarini girin = ");
	scanf("%d",&miktar);
	
	if(miktar%1==0){
	ikiyuz=miktar/200;
	kalan=miktar%200;
	yuz=kalan/100;
	kalan=kalan%100;
	elli=kalan/50;
	kalan=kalan%50;
	yirmi=kalan/20;
	kalan=kalan%20;
	on=kalan/10;
	kalan=kalan%10;
	bes=kalan/5;
	kalan=kalan%5;
	bir=kalan/1;
	kalan=kalan%1;
	
	printf("%d 200 TL\n",ikiyuz);
	printf("%d 100 TL\n",yuz);
	printf("%d 50 TL\n",elli);
	printf("%d 20 TL\n",yirmi);
	printf("%d 10 TL\n",on);
	printf("%d 5 TL\n",bes);
	printf("%d 1 TL\n",bir);
	}	
	getch();
	
	
	

}
