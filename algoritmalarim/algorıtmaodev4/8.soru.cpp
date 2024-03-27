#include <bits\stdc++.h>
using namespace std;
//furkan yorgun 2020717019
typedef long long ll;

ll n,no;

float cevap;

string cevap_anahtari,cocuk;

int main()
{ 
    cevap_anahtari="ABBACADABCDABDDAACDD";
      n=cevap_anahtari.length();
         cout<<"sinavdaki soru sayisi:20"<<endl;
            cout <<"dogru cevap anahtari:"<<cevap_anahtari<<endl;
               for (int i=0; i<10; ++i)
{ 
                cevap=0;
                  cin>>cocuk>>no;
                    for (int J=0; J<n; ++J)
   {
               	if(cocuk[J]==cevap_anahtari[J])cevap+=5;
   }
                 cout<<"öðrenci numarasi= "<<111<<endl;
              cout<<no<<"nin cevaplari"<<cocuk<<endl;
             cout<<no<<"notu:"<<100<<endl;;
}
return 0;
}
