#include <iostream>
using namespace std;


int main()
{
	cout<<"Dizinin elemanlarini giriniz:"<<endl;
	
	int a[6];
	for(int i=0;i<6;i++)
{
	cin>>a[i];
	}	
	int eb=a[0];
	for(int i=1;i<6;i++)
	{
		if(eb<a[i])
{
	eb=a[i];
		}	
	}
	cout<<"en buyuk="<<eb<<endl;	
	int ek=a[0];
	for(int i=1;i<6;i++)
	{
		if(ek>a[i])
		{
			ek=a[i];
		}
		
	}
	cout<<"en kucuk ="<<ek<<endl;

int toplam=a[0];
for(int i=1;i<6;i++)
{
	toplam=toplam+a[i];
}
cout<<"ortalama="<<(float)toplam/6<<endl;
}

