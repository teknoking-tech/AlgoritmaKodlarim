// 0 girilene kadar yazd���m�z say�lar�n ortalamas�n� bulan kod
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int okunan=1;
	int toplam=0;
	int sayi=0;
	for(int i=0;okunan!=0;i++)
	{
			sayi++;
		cout << "Bir sayi giriniz:"<<endl;
		cin >> okunan;
		toplam += okunan;
	
	}
	sayi--;
		cout << "Sayilarin ortalamasi:"<< (float)toplam/sayi<< endl;
	return 0;	
}
