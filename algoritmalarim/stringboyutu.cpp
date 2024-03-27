#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int boyut(char *s){
int b=0;
char c=s[0];
while(c!='\0')
{
	
	c=s[++b];
}
	return b;	
}
int main()
{
cout<<"string fonksiyonu yazmak"<<endl;
char c[8]="yazilim";
char *s=c;
cout<<s<<endl;
	cout<<c<<endl;
	cout<<boyut(c)<<endl;
	cout<<s[1]<<endl;
}
