#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t[7]={-9,-6,-3,0,3,6,9};
	for(int i=0;i<7;i++)
	{
		cout<<t[i];
			if(t[i]>=0)
	{
		t[i]=-3*(t[i]*t[i])+5;
		cout<<t[i]<<endl;
	}
	else 
	{
	t[i]=3*(t[i]*t[i])+5;
	cout<<t[i]<<endl;
	}
	}

}

