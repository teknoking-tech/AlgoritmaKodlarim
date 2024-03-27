#include <iostream>
//furkan yorgun 2020717019
using namespace std;

int main()
{
	int n,i;
	float dizi[100],top=0.0,ort;
	cout<<"Dizinin eleman sayisini giriniz:";
	cin>>n;
	while(n!=0||n<=0)
	{
		cout<<"eleman sayisi 0 olamaz!";
		cout<<"eleman girmeye devam ediniz.";
		cin>>n;
	}
	 for(i = 0; i < n; i++)
	 {
	 	cout<<i+1<<". diziyi giriniz:";
	 	cin>>dizi[i];
	 	top+=dizi[i];
	 	
	 }
	ort=top/n;
	cout<<"ortalama:"<< ort;
		
	return 0;
}
