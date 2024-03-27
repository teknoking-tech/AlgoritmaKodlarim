#include<iostream>
//furkan yorgun 2020717019
int main(int argc, char** argv) {
  using namespace std;
     int sifre;
       string kullaniciadi;
          int hak=3;
             cout<<"kullaniciadi girin";
                cin >> kullaniciadi;
                    cout << "Sifreyi Giriniz :   ";
                       cin >> sifre;
    
                     if(sifre==1234 && kullaniciadi == "oku") {
                    cout << "\nHosgeldiniz...";
              }  
                  else{
                cout << "\nHatali Giris Yaptiniz...";   
               hak--;
             cout << "\n\ntekrar deneyiniz :  ";
            cout<<"kullaniciadi girin";
          cin >> kullaniciadi;
        cout << "Sifreyi Giriniz :   ";
        cin >> sifre;
     if(sifre==1234 && kullaniciadi == "oku"){
      cout << "\nHosgeldiniz...";
          }
        else
           cout << "\nHatali Giris Yaptiniz..."; 
              hak--;
                 cout << "\n\ntekrar deneyiniz :";
                     cout<<"kullaniciadi girin";
                        cin >> kullaniciadi;
                          cout << "Sifreyi Giriniz :   ";
                            cin >> sifre;
    
                          if(sifre==1234 && kullaniciadi == "oku"){
                        cout << "\nHosgeldiniz...";
                        }
                     else
                  cout << "\nÝsleminiz bloke oldu...\n";      
               hak--;
             }
    return 0;
}
