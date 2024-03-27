#include <iostream>
using namespace std;


int main()
{
	cout<<"Matrisin tranpozunu alma:"<<endl;
	int a[3][3]={1,3,4,7,5,3,1,6,3};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
		int g=a[j][i];
		a[j][i]=a[i][j];
		a[i][j]=g;
		}
	}
		cout<<endl;
			cout<<endl;
			cout<<endl;
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
			
			

}
cout<<endl;	
	
	
}
}

