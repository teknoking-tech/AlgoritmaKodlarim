#include <iostream>

using namespace std;
bool AsalMi(int kontrol)
{
	for(int i=2;i<kontrol;i++)
	
{
	if(kontrol%i==0)
	{
		return false;
	}
}
	return true;
}
void AsalListele(int sonDeger)
{
	for(int i=2;i<=sonDeger;i++)
	{
		if(AsalMi(i)==true)
		cout<<i<<endl;
		
	}
	
}
int main()
{
	int sayi;
	cout<<"Asal sayilarin listelenmesi \n **************************** \n Kacinci sayiya kadar asal sayilar listelensin?"<<endl;
	cin>>sayi;
	AsalListele(sayi);
	return 0;
}
