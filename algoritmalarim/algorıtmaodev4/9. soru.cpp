#include <iostream>
using namespace std;
//furkan yorgun 2020717019
int main() {
  string ogrenci[5];
  int kredi_saati, toplam_not, toplam_saat, index;
  char harf_notu;
  float gno[5], max;

  for (int i = 0; i < 5; i++) {
    cout << "Ogrenci " << i+1 << ": ";
    cin >> ogrenci[i];

    toplam_not = 0;
    toplam_saat = 0;
    for (int j = 0; j < 3; j++) {
      cout << "Ders " << j+1 << ": ";
      cin >> kredi_saati;
      cin >> harf_notu;

      if (harf_notu == 'A') {
        toplam_not += kredi_saati * 4;
      } else if (harf_notu == 'B') {
        toplam_not += kredi_saati * 3;
      } else if (harf_notu == 'C') {
        toplam_not += kredi_saati * 2;
      } else if (harf_notu == 'D') {
        toplam_not += kredi_saati;
      } else {
        toplam_not += 0;
      }

      toplam_saat += kredi_saati;
    }

    gno[i] = toplam_not/(float)toplam_saat;
  }

  max = gno[0];
  for (int i = 1; i < 5; i++) {
    if (max < gno[i]) {
      max = gno[i];
      index = i;
    }
  }

  cout << ogrenci[index] << endl; 
}
