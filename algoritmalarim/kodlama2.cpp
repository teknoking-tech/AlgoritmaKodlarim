#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int x1,x2,x3;
	double ort;
	cout<<"1. Yaz�l�y� giriniz:";
	cin>>x1;
	cout<<"2. yazl�y� giriniz:";
	cin>>x2;
	cout<<"3. yaz�l�y� giriniz:";
	cin>>x3;
	ort=(double)(x1+x2+x3)/3;
	cout<<"ortalama" <<ort;
}
	


