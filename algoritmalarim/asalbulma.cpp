#include<iostream>

using namespace std;
bool asalmi(int kontrol)
{
	for(int i=2;i<kontrol;i++)
	{
		if(kontrol%i==0)
		{
		return false;
}
		return true;
	}
	
}
void asallist(int sondeger)
{
	for(int i=2;i<=sondeger;i++)
	{
		if(asalmi(i)==true)
		cout<<i<<endl;
	}
}

int main ()
{
    int sayi;
    cout<<"hangi sayiya kadar asal sayi bastirmak istiyosunuz?"<<endl;
    cin>>sayi;
	asallist(sayi);
	return 0;
	
	
}
