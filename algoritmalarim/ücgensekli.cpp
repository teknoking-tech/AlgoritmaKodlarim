#include <iostream>

using namespace std;
int main()
{
	cout<<"Boyutu giriniz:"<<endl;
	int boyut;
	cin>>boyut;
	for(int i = 1;i<=boyut;i++)
	{
			for(int j = 1;j<i;j++)
		{
			cout<<" ";
		}
			for(int k = 1;k<=boyut-i+1;k++)
		{
		cout<<"*";
}
	cout<<endl;	
	
	}

}
