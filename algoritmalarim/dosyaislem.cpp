#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;
string ters(string s)
{
	char c =s[0];
	int i=1;
	char *p;
	char *q;
	p= &s[0];
	q= &s[0];
	while(*p!='\0')
	{
		p++;	
	}
	p--;
	while(p>q)
	{
		char c= *p;
		*p=*q;
		*q=c;
		p--;
		q++;
	}
	return s;
}
int main()
{
	cout<<"dosyadaki metni tersine cevirme: "<<endl;
	ifstream girdi("girdi.txt");
	string s;
	ofstream cikti("cikti.txt");
	while(getline(girdi,s));
	{
	cout<<ters(s)<<endl;
	cikti<<ters(s)<<endl;
}
girdi.close();
cikti.close();	
}

