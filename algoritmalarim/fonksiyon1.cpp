//Fonksiyon tanýmlama ve çaðýrma 
#include <stdio.h>
#include <conio.h> /*getch fonksiyonunu kullanabilmek icin tanimlanmistir.*/ 

 int topla(int x, int y); /*fonksiyon tanimlama*/ 
 int carp(int x, int y);  /*fonksiyon tanimlama*/ 
 void yazdir(int x,int y);  /*fonksiyon tanimlama*/ 

int main(void)
{ 
	int a,b,t,c; a=10; b=5; 
	t=topla(a,b); /*Fonksiyon cagirma*/ 
	c=carp(a,b); /*Fonksiyon cagirma*/ 
	yazdir(t, c); /*Fonksiyon cagirma*/ 
 	getch(); /*Ekran ciktisini ekranda bekletebilmek icin*/ 
return 0; 
} /*main ana fonksiyon sonu*/ 

int topla(int x,int y) /*toplama islemini gerceklestirir*/ 
	{ 
	int sonuc; 
	sonuc=x+y; 
	return sonuc; 
	} 
int carp(int x,int y) /*carpma gerceklestirir,carpim sonucunu geri döndürür*/ 
	{ 
	int sonuc; 
	sonuc=x*y; 
	return sonuc; } 
void yazdir(int x, int y) /*ekrana yazdirma islemini gerceklestirir*/ 
	{ 
	printf("toplam sonucu: %d", x); 
	printf("\n");
	printf("carpim sonucu: %d", y);
	}

