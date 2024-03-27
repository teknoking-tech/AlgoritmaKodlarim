#include <iostream>
#include <ctime>
#include <stdlib.h> 
using namespace std;
int main()
{
    cout << "oz yineli fonksiyonlar - rastgele sayi atama" << endl;
    int rastgele;
    srand(time(NULL));
    rastgele=rand()%6 +1;//zar oyunu 
    cout<<rastgele<<endl;
    
    rastgele=rand()%2; // yazý=0 tura=1
    cout<<rastgele<<endl;
    rastgele=rand()%100;
    cout<<rastgele<<endl;
}
