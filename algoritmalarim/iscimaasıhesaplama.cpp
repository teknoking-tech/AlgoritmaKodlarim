//Bir fabrikada sabit maaþla çalýþan iþçiler aile durumlarýna göre ek maaþ almaktadýrlr. 
//Çocuk sayýsý 1 ise maaþýnýn %5’i kadar , çocuk sayýsý 2 ise %10’u 3 ve daha fazla ise %15’i kadar aile yardýmý almaktadýr. 
//Buna göre kullanýcýdan iþçinin maaþý ve çocuk sayýsý istenerek gerekli hesaplamayý yapan algoritma ?
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int cocukSayisi;
float maas;

 cout<<"iscinin maasi ne kadar? "<<endl;
   cin>>maas;
     cout<<"iscinin kac cocugu var? "<<endl;
       cin>>cocukSayisi;
         if(cocukSayisi = 1)
{       	
        	cout<<"iscinin geliri:"<<(float)(maas+(maas*(5/100)))<<endl;
}
               else if(cocukSayisi = 2)
               {
               		cout<<"iscinin geliri:"<<maas *(10/100)<<endl;
			   }
			   else if(cocukSayisi >= 3)
			   {
			   		cout<<"iscinin geliri:"<<(float)(maas*(15/100)+maas)<<endl;
			   }
			   else if(cocukSayisi = 0)
			   {
			   	cout<<"iscinin geliri: "<<maas<<endl;
			   }
			   
			   return 0;
		}
