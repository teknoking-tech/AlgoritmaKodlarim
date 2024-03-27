#include <iostream>//furkan yorgun

using namespace std;
void f(int *param1,const int param2);
int main()
{
int myarray[]= {1,5,1,5,1,5};
int index;
f(myarray,6);
	cout<<"guncellenmiş dizi"<<endl;
for(index=0;index<6;index++)
{
cout<<myarray[index]<<endl;
}
return 0;
}
void f(int x[],int y)
{
cout<<"guncellenmiş dizi"<<endl;	
for(int i=0;i<6;i++)
{
	cout<<x[i]<<endl;
	
}
}
