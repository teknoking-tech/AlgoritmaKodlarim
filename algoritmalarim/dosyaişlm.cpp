#include <iostream>
#include <fstream>
int main(){

using namespace std;
ofstream dosya;
dosya.open("kayit.txt");
dosya<<"merhaba dunya"; 
dosya.close();
string satir;
ifstream dosya2 ("kayit.txt");
    if (dosya2.is_open()) {
        
        while (getline(dosya2, satir)) { //fstream kaynaklı bir koddur.
            
            cout << satir << endl;
            }
        dosya2.close();
        }
}
