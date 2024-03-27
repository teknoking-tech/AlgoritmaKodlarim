#include <iostream>

using namespace std;
int main()
{
	int a[5];
	cout<<"5 sayi giriniz:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int enb=a[0];
	for(int i=0;i<5;i++)
	{
		if(enb<a[i])
		{
			enb=a[i];
		}
		
	}
	int enk=a[0];
	for(int i=0;i<5;i++)
	{
		if(enk>a[i])
		{
			enk=a[i];
		}
		
}
cout<<"en buyuk sayi:"<<enb<<endl;
		cout<<"en kucuk sayi:"<<enk<<endl;
}
