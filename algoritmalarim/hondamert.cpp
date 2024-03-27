
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, k, l, n, q, istasyon, uzunluk[istasyon-1];
    float boh[istasyon-1];
    char yol[istasyon-1];
    bool yanlis = true;

    cout << "Yol uzerindeki benzin istasyonu sayisi: "; cin >> istasyon;

    while(yanlis == true){
        n = 0;
        cout << "Bir yol turu bir uzunluk olacak sekilde aralarina bosluk birakarak giriniz: ";
        for(i = 0, k = 1, l = 1; i < (istasyon-1)*2; i++){
            if(i % 2 == 0){
                cin >> yol[k];
                k++;
            }
            else if(i % 2 == 1){
                cin >> uzunluk[l];
                if(1 <= uzunluk[l] && uzunluk[l] <= 1000)
                {
                    n++;
                    if(n == (istasyon-1)){
                        yanlis = false;
                    }
                }
                l++;   
            }
        }
    }

    for(int i = 1; i < istasyon; i++){
        cout << i << ".\t" << (float)yol[i] << "\t" << (float)uzunluk[i] << "\n";        

    }

	return 0;
}

