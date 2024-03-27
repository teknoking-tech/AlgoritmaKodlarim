#include <stdio.h>
#include <conio.h> /*getch fonksiyonunu kullanabilmek icin*/
#include <string.h>
int main(void)
{ 
char ad[10],n;
printf("bir isim giriniz:");
scanf("%s",&ad);
n=strlen(ad);
printf("girdiginiz isim %s karakter sayisi %d dir\n",ad,n);
getch();
return 0;
}
