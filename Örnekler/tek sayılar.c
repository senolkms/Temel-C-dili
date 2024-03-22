#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
main()
{
setlocale(LC_ALL, "Turkish");

int i1,tek,cift;
for(i1=0;;i1=i1+1)
{
	if(i1%2==0)
	cift=cift+i1;
	else
	tek=tek+i1;
	
	if(i1==10) break;
	else continue;	
}
printf("Tek Sayýlar Toplamý %d\n",tek);
printf("Çift Sayýlar Toplamý %d",cift);
getch();
}
