//C++ ile Fonksiyon kullanarak kullan�c�dan 10 adet say� isteyerek girilen bu
// say�lardan tek ve �ift olanlar�n adetini fonksiyon kullanarak olu�turunuz.
#include <iostream>

using namespace std;
int tek(int x)
{
	int kactek;
	for(int i=0;i<x;i++)
	{
		kactek++;
	}
	return kactek;
}
int cift(int y)
{
	int kaccift;
	for(int i=0;i<y;i++)
	{
		kaccift++;
	}
	return kaccift;
	
}
int main()
{
	int sayi[10];
	cout<<"10 adet sayi giriniz:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>sayi[i];
		if((float)sayi[i]%2==0)
	cout<<"tek sayi adeti:"<<tek(sayi[i])<<endl;
	else if((float)sayi[i]%2!=0)
	cout<<"cift sayi adeti:"<<cift(sayi[i])<<endl;

	}

	return 0;
	
	
}
