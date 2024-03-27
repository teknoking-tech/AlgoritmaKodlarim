#include<iostream>
#include<cstdlib>
//furkan yorgun 2020717019
using namespace std;

 int main() {
 	int sayi;
 	int tahmin;
 	   sayi = rand() % 100 + 1;
 	     while(true)
 	     {
 	     	cout << "tahmininizi giriniz:";
 	     	cin >> tahmin;
 	     	  if (tahmin < sayi)
 	     	  cout << "tahmin sayidan daha kucuktur" << endl;
 	     	  else if (tahmin > sayi)
 	     	  cout << "tahmin sayidan daha buyuktur" << endl;
 	     	  else 
 	        {
 	     	  	cout <<"tahmininiz dogru"	<< endl;
 	     	  	break;
			}
		}
 	     	system("PAUSE");
 	     	return 0;
		  }
 

