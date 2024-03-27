#include <iostream>
using namespace std;

int main()
{
	cout<<"Dizinin alt kumesini bulma:"<<endl;
	
	int a[3]={1,3,5};
	int b[6]={1,3,5,6,7,8};
	int aboyut=3;
	int bboyut=6;
	
	for(int i=0;i<bboyut;i++)
	{
		bool esit=true;
		for(int j=0;j<aboyut;j++)
		{
			if(a[j]!=b[i+j])
			{
				esit=false;
				break;
				
			}
			
			
		}
		if(esit)
		{
		
		cout<<"alt dizidir :"<<i<<" 'den baslar."<<endl;
	}
	}
	}
	
	
	
	

