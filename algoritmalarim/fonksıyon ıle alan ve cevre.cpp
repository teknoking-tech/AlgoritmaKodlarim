#include <iostream>
//C++ ile Fonksiyon kullanarak dikd�rtgen alan ve �evre hesaplayan �rne�i
using namespace std;
int alan(int x,int y)
{
	return x*y;
}
int cevre(int x,int y)
{
return 2*(x+y);
}
int main()
{
	int x;
	int y;
	cout<<"kenar uzunluklari nedir?"<<endl;
	cin>>x;
	cin>>y;
	cout<<"dikd�rtgenin alani ve cevresi:"<<endl;
	cout<<"alan:"<<alan(x,y)<<endl;
	cout<<"cevre:"<<cevre(x,y)<<endl;
	 return 0;
	
}
