#include <iostream>

using namespace std;
int faktoriyel(int x)
{
	int carpim=1;
	for(int i=x;i>0;i--)
	{
		carpim*=i;
	}
		return carpim;
}
int kombinasyon(int f,int r)
{
	return faktoriyel(f)/(faktoriyel(r)*faktoriyel(f-r));	
}
int main ()
{
	int a;
	int b;
	int c;
	cout<<"faktoriyeli bulunmasi istediginiz sayi: "<<endl;
    cin>>a;
	cout<<faktoriyel(a)<<endl;
	cout<<"kombinasyonunu bulmak istediginiz sayi:"<<endl;
	cin>>b;
	cin>>c;
	cout<<kombinasyon(b,c)<<endl;
  }  
