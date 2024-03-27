#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int boyut;
	cout<<"ucgenin buyuklugunu giriniz:"<<endl;
	cin>>boyut;
	for(int i=1;i<=boyut;i++)
	{
	for(int j=1;j<=i;j++)
	{
		cout<<" ";
	}
		for(int k=1;k<=boyut-i+1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
}
