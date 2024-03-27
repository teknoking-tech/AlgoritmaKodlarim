/*Kendisi hariç bütün pozitif bölenlerinin toplamý kendisine eþit olan sayýlara mükemmel sayý denir.
6 bir mükemmel sayýdýr. Çünkü 6’nýn pozitif bölenleri 1,2,3 ve 6’dýr. Kendisi hariç diðer bölenlerini toplarsak 1+2+3=6 eder.

 Yukarýdaki bilgiler doðrultusunda C++ ile 1-500 arasýndaki mükemmel sayýlarý listeleyelim.*/
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
