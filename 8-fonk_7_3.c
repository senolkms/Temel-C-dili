//fG; kullan�c�dan say� al�nacak ve mainDeki de�i�kene atanacak
//fF; fakt�riyel hesaplan�p yaz�ls�n
//fM; m�kemmel olup olmad��� mainDe yaz�ls�n
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fG();
void fF(int);
int fM(int);

main(void)
{
	setlocale(LC_ALL, "Turkish");
	int s=fG();
	fF(s);
	if (fM(s)==1)
	   printf("%d say�s� m�kemmeldir.\n",s);
	else
	   printf("%d say�s� m�kemmel de�ildir.\n",s);
	getch();
}

int fG(void)
{
   int x;
   printf("Bir Say� Giriniz : ");
   scanf("%d",&x);
   return x;
}

void fF(int x)
{
   int f=1,i1;
   for (i1=2;i1<=x;i1++)
      f=f*i1;
   printf("%d say�s�n�n fakt�riyeli = %d\n",x,f);
}

int fM(int x)
{
   int tp=0,i1;
   for (i1=x-1;i1>=1;i1--)
   {
      if (x%i1==0)
         tp=tp+i1;
   }
   if (x==tp)
      return 1;
   else
      return 0;
}
