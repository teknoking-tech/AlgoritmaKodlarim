/*Kendisi hari� b�t�n pozitif b�lenlerinin toplam� kendisine e�it olan say�lara m�kemmel say� denir.
6 bir m�kemmel say�d�r. ��nk� 6�n�n pozitif b�lenleri 1,2,3 ve 6�d�r. Kendisi hari� di�er b�lenlerini toplarsak 1+2+3=6 eder.

 Yukar�daki bilgiler do�rultusunda C++ ile 1-500 aras�ndaki m�kemmel say�lar� listeleyelim.*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int i=1,a=1,b=0;
	cout<<" 1-500 arasi mukkemmel sayilar:"<<endl;
	while(i<=500)
	{
		while(a<=500)
		{
			if(a<i)
			{
			  if(i % a == 0)
			  b=b+a;
		}
		
		a++;
		}	
	if (b==i)
	{
	cout<<i<<"  "<<endl;
    }
	i++;
	a=1;
	b=0;
}
}
