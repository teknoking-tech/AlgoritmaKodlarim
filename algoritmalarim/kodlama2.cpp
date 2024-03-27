#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int x1,x2,x3;
	double ort;
	cout<<"1. Yazýlýyý giriniz:";
	cin>>x1;
	cout<<"2. yazlýyý giriniz:";
	cin>>x2;
	cout<<"3. yazýlýyý giriniz:";
	cin>>x3;
	ort=(double)(x1+x2+x3)/3;
	cout<<"ortalama" <<ort;
}
	


