#include <stdio.h>
#include <conio.h>
int kuvvetAl(int sayi, int kuvvet)

{
		int sonuc=1;
	for(int i=1;i<=kuvvet;i++)

	sonuc = sonuc * sayi;
	return sonuc;
}
int main()
{
	int yazdir1;
	yazdir1=kuvvetAl(3,4);
	printf("3 un 4. kuvveti:%d",yazdir1);
	int yazdir2=kuvvetAl(6,4);
	printf("\n6 nin 4. kuvveti:%d",yazdir2);
	int sayi1=5, kuvvet1=4;
	int yazdir3 = kuvvetAl(sayi1, kuvvet1);
	printf("\nsonuc",yazdir3);
	if(kuvvetAl(3,4)>kuvvetAl(6,4))
	printf("3 un 4. kuvveti 6 nin 4. kuvvetinden buyuktur");
	else
	printf("3 un 4. kuvveti 6 nin 4. kuvvetinden kucuktur");
	printf("\n");
   	int i;
for (i = 1; i <= kuvvetAl(2, 3); i++)
{
printf("%d ",i);
}
getch();
return 0;
}


