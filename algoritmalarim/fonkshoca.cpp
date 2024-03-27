#include <stdio.h>
#include <conio.h> /*getch fonksiyonunu kullanabilmek icin tanimlanmistir.*/ 
int KuvvetAl(int sayi, int kuvvet)
{
int sonuc = 1;
for (int i = 1; i <= kuvvet; i++)
sonuc = sonuc * sayi;
return sonuc;
}
int main()
{
int yazdir1;
yazdir1 = KuvvetAl(3, 4);
printf("3 un 4. kuvveti=%d", yazdir1);
int yazdir2 = KuvvetAl(4, 2);
printf("\n4 un karesi=%d", yazdir2);
int sayi1=5, kuvvet1=4;
int yazdir3 = KuvvetAl(sayi1,kuvvet1);
printf("\nsonuc ", yazdir3);
if (KuvvetAl(3,4) > KuvvetAl(4,2))
printf("4 un 5. kuvveti, 5 in 4. kuvvetinden buyuktur.") ;
else
printf("4 un 5. kuvveti, 5 in 4. kuvvetinden kucuktur.") ;
printf("\n");
int i;
for (i = 1; i <= KuvvetAl(2, 3); i++)
{
printf("%d ",i);
}
getch();
return 0;
}

