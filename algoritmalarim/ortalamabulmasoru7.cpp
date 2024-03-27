#include <iostream>
#include <conio.h>
#include <stdio.h>


using namespace std;
int main()
{
	int i,j,n,pz=0,ng=0,z;
	float tp=0,tn=0,ortp,ortn;
	cout<<"kac sayi girilecek:"<<endl;
	cin>>n;
	float sayi[n];
	for(i=0;i<n;i++)
	{
		cout<<i+1<<". sayiyi giriniz:"<<endl;
		cin>>sayi[i];
		if (sayi[i]<0)
		{
			ng++;
			tn=tn+sayi[i];
		}
		if (sayi[i]>0)
		{
		pz++;
		tp=tp+sayi[i];	
			
		}
	}
	ortp=tp/pz;
	ortn=tn/ng;
	cout<<"pozitif sayi="<<pz<<endl;
	cout<<"pozitif ortalama="<<ortp<<endl;
	cout<<"negatif sayi="<<ng<<endl;
	cout<<"negatif ortalama="<<ortn<<endl;
	getch ();
	return 0;
	
}
