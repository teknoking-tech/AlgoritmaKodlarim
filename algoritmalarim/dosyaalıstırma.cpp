#include <iostream>
#include <fstream>
//furkan yorgun
using namespace std;
int  main()
{
ofstream dosya;
dosya.open("notlar.txt");
int ayse,mehmet,ali,tarkan;
dosya<<"Ayse Gel 40 60"<<endl;
dosya<<"Mehmet Can 50 50"<<endl;
dosya<<"Ali Kaldi 100 40"<<endl;
dosya<<"Tarkan Sel 10 90"<<endl;
ayse=(40*(40/100))+(60*(60/100));
mehmet=(50*(40/100))+(50*(60/100));
ali=(100*(40/100))+(40*(60/100));
tarkan=(10*(40/100))+(90*(60/100));
dosya<<ayse<<endl;
dosya<<mehmet<<endl;
dosya<<ali<<endl;
dosya<<tarkan<<endl;
dosya.close();

  string satir;
ifstream okuma;
okuma.open("notlar.txt");
while(getline(okuma,satir));
{
	cout<<satir<<endl;
}
okuma.close();

}



