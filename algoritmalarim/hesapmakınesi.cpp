//hesap makinesi
#include <iostream>

using namespace std;
int main()
{
	cout<<"******************"<<endl;
	cout<<" HESAP MAKINESI"<<endl;
	cout<<"******************"<<endl;
	int sayi2,sayi1,sonuc;
	char islem;
	
	cout<<"ilk sayiyi giriniz:"<<endl;
	cin>>sayi1;
	cout<<"ikinci sayiyi giriniz:"<<endl;
	cin>>sayi2;
	cout<<"yapacaginiz islemi yaziniz:"<<endl;
	cout<<"islemler:carpma=*,bolme=/,cýkarma=-,toplama=+"<<endl;
	cin>>islem;
	switch (islem)
	{
		case '+':sonuc=sayi1+sayi2; cout<<"sonuc:"<<sonuc<<endl; break;
		   case '-':sonuc=sayi1-sayi2; cout<<"sonuc:"<<sonuc<<endl; break;
		       case '*':sonuc=sayi1*sayi2; cout<<"sonuc:"<<sonuc<<endl; break;
		           case '/':sonuc=sayi1/sayi2; cout<<"sonuc:"<<(float)sonuc<<endl; break;
	                  default:cout<<"yanlis deger girdiniz"<<endl; break;
	}
	
}
