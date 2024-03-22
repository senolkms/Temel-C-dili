#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Turkish");
    
    int sayi,i1,ks,bs;
    
    for(i1=0; i1<10; i1++)
	{
    	printf("%d.Sayýyý Giriniz ", i1+1); 
		scanf("%d", &sayi);
		
    if(i1==0)
	{
    bs = sayi;        
    ks = sayi;        
    }
    else{                 
    if(ks > sayi) ks = sayi;          
    if(bs < sayi) bs = sayi;
    	}        
    }
    printf("En küçük sayý= %d\n", ks);
	printf("En büyük sayý= %d\n", bs);
    getch();
}
