#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ofstream dosya;
	dosya.open("deneme.txt");
	if(dosya.is_open())
	{
		dosya<<"furkanin ilk dosyasi"<<endl;
		dosya.close();
	}
	else
	{
		cout<<"dosya acilamiyor"<<endl;
	}
	ifstream dosya2 ("deneme.txt");
		string satir;
	if(dosya2.is_open())
	{
		while(getline(dosya2,satir))
		{
		cout<<satir<<endl;
	}
	dosya2.close();	
	}
	
	
	

}
