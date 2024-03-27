#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	srand (time(0));
	int alt,ust,tahmin;
	cout<<"alt siniri girin:"<<endl;
	cin>>alt;
	cout<<"ust siniri girin:"<<endl;
	cin>>ust;
	int rastgeleSayi = alt+ rand() % ((ust+1)-alt);
	do
	{
	cout<<"Bil bakalim hangi numarayi tuttum:)"<<endl;
	cin>>tahmin;
      if(tahmin<rastgeleSayi)
      	cout<<"Tahmininiz sayidan daha kucuk!"<<endl;
      	else if(tahmin>rastgeleSayi)
      	cout<<"Tahmininiz sayidan daha buyuk!"<<endl;
	  else
	  cout<<"dogru bildin:)"<<endl;	
}
while(tahmin!=rastgeleSayi); 
return 0;	
}
