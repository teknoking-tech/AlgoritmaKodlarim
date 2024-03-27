#include<iostream>

using namespace std;
int main()
{
	int sayi;
	cout<<"bir sayi giriniz:"<<endl;
	cin>>sayi;
	for(int i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		cout<<i<<endl;
			
	}
	
	
	
	return 0;
}
