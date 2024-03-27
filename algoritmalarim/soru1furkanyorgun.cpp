//furkan yorgun 2020717019
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x;
cout<<"bir f(x) fonksiyonu giriniz"<<endl;
cin>>x;
if(x<0)
cout<<"y = 1"<<endl;
else if(x>=0&&x<4)
cout<<"y = "<<(x*x)-2*x<<endl;
else if(x>=2&&x<4)
cout<<"y="<<(-x*x)-sqrt(x)+x<<endl;
else if(x>=4)
cout<<"y="<<x<<endl;
	return 0; 
}
