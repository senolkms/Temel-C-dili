#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    
    int s1,s2,s3;
    
    printf("1.Say�y� Giriniz="); scanf("%d",&s1);
    printf("2.Say�y� Giriniz="); scanf("%d",&s2);
    printf("3.Say�y� Giriniz="); scanf("%d",&s3);
    
    if (s1>=s2 && s1>=s3)
    	printf("En B�y�k Say�=%d",s1);
    else if (s2>=s3) //else if (s2>=s1 && s2>=s3)
    	printf("En B�y�k Say�=%d",s2);
    else //else if (s3>=s1 && s3>=s2)
    	printf("En B�y�k Say�=%d",s3);
    printf("\n\n");
	if (s1<=s2 && s1<=s3)
    	printf("En K���k Say�=%d",s1);
    else if (s2<=s3) //else if (s2<=s1 && s2<=s3)
    	printf("En K���k Say�=%d",s2);
    else //else if (s3<=s1 && s3<=s2)
    	printf("En K���k Say�=%d",s3);
    
    getch();
    }
