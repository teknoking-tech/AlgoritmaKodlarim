#include <iostream>
using namespace std;
bool AsalMi(int kontrol)
{
int i;
for (i = 2; i<kontrol; i++)
{
if (kontrol%i == 0)
return false;
}
return true;
}
void AsalListele(int sonDeger)
{
int i;
for (i = 2; i <= sonDeger; i++)
{
if (AsalMi(i)==true)
cout << i << " ";
} 
}
int main()
{
int sayi;
cout << "hangi sayiya kadar asallar bulunsun? ";
cin >> sayi;
AsalListele(sayi);
return 0;
}

