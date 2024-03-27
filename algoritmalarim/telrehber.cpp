#include<iostream>

using namespace std;
int main()
{
	int s;
	int isim[1];
cout<<"kac isim ekliceksiniz:"<<endl;
cin>>s;
for(int i=1;i<=s;i++)
{
	cout<<"isim giriniz:"<<endl;
	cin>>isim[i++];
}

	return 0;
}
