//For Döngüsü kullanrak Faktoriyel Hesaplama Örneði:
#include <iostream>

using namespace std;
int main()
{
	cout<<"faktoriyelini bulmak istedigin sayiyi gir:"<<endl;
	
	int f;
	int carp=1;
	cin>>f;
	for(int i=f;i>0;i--)
	{
		carp*=i;
	}
	cout<<"sonuc:"<<carp<<endl;
}
