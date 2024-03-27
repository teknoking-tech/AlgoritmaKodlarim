#include<iostream>

using namespace std;
int main()
{
	int top=0;
	int sayi;
	for(int i=0;i<5;i++)
	{
		cout<<"bir sayi giriniz"<<endl;
		cin>>sayi;
		top+=sayi;
	}
	cout<<"girilen sayilarin toplami: "<<top<<endl;
	return 0;
}
