//f(x) fonksiyonu yazma f(X) = x^2+6x+8 ve kok bulma
#include <iostream>
#include <math.h>
using namespace std;

int hesap(int x)
{
	x=(x*x)+(6*x)+8;
	
	return x;
}
int kokler(int a,int b)
int main()
{
	int x;
	cout<<"fonksiyonun icine hangi sayi yazilsin?"<<endl;
	cin>>x;
	cout<<"sonuc:"<<hesap(x)<<endl;
	return 0;
}
