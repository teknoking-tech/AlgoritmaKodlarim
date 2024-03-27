#include <stdio.h>
#include <conio.h>

int topla(int x, int y);
int carp(int x, int y);
void yazdir(int x, int y);

int main (void)
{
	int a,b,t,c; 
	a=10;
	b=20;
	t=topla(a,b);
	c=carp(a,b);
	yazdir(t,c);
	getch();
	return 0;
}
 int topla(int x, int y)
 {
 	int sonuc;
 	sonuc=x+y;
 	return sonuc;
 }
 int carp(int x, int y)
 {
 		int sonuc;
 	sonuc=x*y;
 	return sonuc;
 }
 void yazdir(int x, int y)
 {
 	printf("toplam sonucu: %d",x);
 	printf("\n");
 	printf("carpim sonucu:%d",y);	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
