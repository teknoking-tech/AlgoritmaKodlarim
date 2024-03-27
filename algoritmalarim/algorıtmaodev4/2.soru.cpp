#include <iostream>
using namespace std;
//furkan yorgun 2020717019
int main()
{
    unsigned int n;
    unsigned long long faktoriyel = 1;

         cout << "pozitif bir tam sayi giriniz:";
         cin >> n;

        for(int i = 1; i <=n; ++i)
    {
        faktoriyel *= i;
    }

         cout << "faktoriyeli:"  " = " << faktoriyel;    
    return 0;
}
