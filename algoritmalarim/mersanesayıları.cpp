#include <iostream>
using namespace std;

int ust(int t, int u)
{
	int sonuc=1;
	for(int i=1;i<=u;i++)
	{
	sonuc=sonuc*t;	
	}
	return sonuc;
}
int main()
{
	cout<<"ozyinelemeli fonksiyonlar_mersan sayilari:"<<endl;
	for(int i=1;i<=20;i++)
{
	cout<<(long)ust(2,i)<<endl;
	}	
	
}
