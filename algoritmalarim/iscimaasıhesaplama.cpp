//Bir fabrikada sabit maa�la �al��an i��iler aile durumlar�na g�re ek maa� almaktad�rlr. 
//�ocuk say�s� 1 ise maa��n�n %5�i kadar , �ocuk say�s� 2 ise %10�u 3 ve daha fazla ise %15�i kadar aile yard�m� almaktad�r. 
//Buna g�re kullan�c�dan i��inin maa�� ve �ocuk say�s� istenerek gerekli hesaplamay� yapan algoritma ?
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
