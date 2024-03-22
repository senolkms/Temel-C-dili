#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
{setlocale(LC_ALL, "Turkish");
	printf("for\n");
    int i1,snc1=0,snc2=0;
	for(i1=0;i1<=10;i1++)
	{

    	if(i1%2==0)
    		snc2=snc2+i1;
    	else
    		snc1=snc1+i1;
    }	
    	printf("Çift Sayýlar Toplamý = %d\n",snc2);
    	printf("Tek Sayýlar Toplamý = %d",snc1);	
	
    getch();
    system("cls");
    
    printf("while\n");
	while(i1<=10)
	{	
		printf("while\n");
		
		if(i1%2==1)
    		snc2=snc2+i1;
    	else
    		snc1=snc1+i1;
    }	
	printf("Tek Sayýlar Toplamý = %d\n",snc2);
    printf("Çift Sayýlar Toplamý = %d",snc1);
	getch();
	
    
}   	
