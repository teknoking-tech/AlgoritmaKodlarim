#include <stdio.h>
#include <conio.h> /*getch fonksiyonunu kullanabilmek icin*/
#define SEHIR 2 // sat�r say�s�
#define HAFTAGUN 7 //s�t�n say�s�
int main()
{
int sicaklik[SEHIR][HAFTAGUN];
printf( "Her bir sehirde haftanin g�nlerine ");
printf("ait sicaklik degerlerini giriniz. \n") ;
// sicaklik dizisine degerler giriliyor
for (int i = 0; i < SEHIR; ++i)
{
for (int j = 0; j < HAFTAGUN; ++j)
{
printf("%d.Sehir , %d. Gun Sicaklik Degeri :", i + 1 ,j + 1);
scanf("%d",&sicaklik[i][j]);
}
}
printf( "\n\nDegerler gosteriliyor:\n");
// sicaklik dizisinden degerler okunuyor.

for (int i = 0; i < SEHIR; ++i)
{
for (int j = 0; j < HAFTAGUN; ++j)
{
printf( "%d.Sehir,%d. Gun =%d\n", i + 1 , j + 1,sicaklik[i][j] );
}
printf("*************************\n");
}

getch(); return 0;
}
