#include<iostream>

using namespace std;
int main()
{
int a[10];
int toplam=0;
cout<<"10 sayi giriniz:"<<endl;
for(int i=0;i<10;i++)
{
cin>>a[i];
}
int s=0;
for(int i=0;i<10;i++)
{	
if(a[i]<100)
{
toplam+=a[i];
}	
else if(a[i]<200)
{
s++;	
}
else if(a[i]%4==0)
{
cout<<"bolunme: "<<a[i]<<endl;
}
}
cout<<"toplam: "<<toplam<<endl;
cout<<"adet: "<<s<<endl;
}
