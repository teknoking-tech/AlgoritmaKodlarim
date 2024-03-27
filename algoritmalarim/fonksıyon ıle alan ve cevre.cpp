#include <iostream>
//C++ ile Fonksiyon kullanarak dikdörtgen alan ve çevre hesaplayan örneði
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
	cout<<"dikdörtgenin alani ve cevresi:"<<endl;
	cout<<"alan:"<<alan(x,y)<<endl;
	cout<<"cevre:"<<cevre(x,y)<<endl;
	 return 0;
	
}
