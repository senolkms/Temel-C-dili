#include <stdio.h>
#include <conio.h>
#include <math.h>
 
main()
{
 int x1,y1,x2,y2;
 float msf;

 printf(" 1.Nokta (X): "); scanf("%d",&x1);
 printf(" 1.Nokta (Y): "); scanf("%d",&y1);
 
 printf(" 2.Nokta (X): "); scanf("%d",&x2);
 printf(" 2.Nokta (Y): "); scanf("%d",&y2);
 
 msf=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
 printf("\n Mesafe : %.2f",msf);
 
 getch();
}
