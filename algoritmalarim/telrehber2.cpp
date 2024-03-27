#include<iostream>

using namespace std;
int main()
{
	int e;
	string numara[500];
	string isim[500];
	cout<<"Bir sayi giriniz:"<<endl;
	cin>>e;
	cout<<"isim giriniz:"<<endl;
	for(int i=0;i<e;i++)
	{
   cin>>isim[i];
	}
	
	cout<<"bir numara giriniz:"<<endl;
		for(int i=0;i<e;i++)
		{
			cin>>numara[i];
		}

		cout<<"kimin numarasini ariyorsunuz:"<<endl;

		
	return 0;
}
