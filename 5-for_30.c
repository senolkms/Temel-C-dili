#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{
	setlocale(LC_ALL, "Turkish");
	int t,s;
	srand(time(NULL));
	unsigned char i1,ey=255,eys,eu=0,eus;
	t=15;
	printf("Say�=%d\n\n",t);
	for (i1=1;i1<=5;i1++)
	{
		printf("%d.Say�y� Giriniz=",i1);
		scanf("%d",&s);
		if (abs(t-s)<ey)
		{
			ey=abs(t-s);
			eys=s;
		}
		if (abs(t-s)>eu)
		{
			eu=abs(t-s);
			eus=s;
		}
	}
	printf("En yak�n say�=%d\nAradaki mesafe=%d\n\n",eys,ey);
	printf("En uzak say�=%d\nAradaki mesafe=%d",eus,eu);
	getch();
}
