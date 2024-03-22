#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(void)
    {
    setlocale(LC_ALL, "Turkish");
    char c1[10]; /*metin ifadelerini alýrken gets, yazdýrýrken puts kullanýlacak!*/
    printf("String1 giriniz : "); gets(c1);
    puts(c1); /*printf("%s",c1);*/
    
    /*
    char *c2;
    c2 = (char *) malloc(10); string ifadelerinde yer ayrýlmasý gerekmektedir; ya c[..] þeklinde ya da mallac komutuyla
    printf("String2 giriniz : "); gets(c2);
    printf("%s\n",c2);
    puts(c2);
    */
    getch();
    }
