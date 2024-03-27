#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    string kAdi();
	int sifre=0;
	
	printf("kullanici adini giriniz: \n");
	scanf("%s",&kAdi);
	printf("sifrenizi giriniz: \n");
	scanf("%d",&sifre);
	printf("kullanici adi: %s \nsifre: %d",kAdi,sifre);
	getch();
	return 0;
}
