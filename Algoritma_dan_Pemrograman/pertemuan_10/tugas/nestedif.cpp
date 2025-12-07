#include <iostream>
#include <iomanip>

using namespace std;

#ifdef _WIN32
  #define CLEAR system("cls");
#else
  #define CLEAR system("clear");
#endif

void garis() {
  cout << "---------------------------------------------------------------" << endl;
}

int main() {
  srand(time(0)); // membuat rand() acak setiap waktu berjalankan

  int sisa_kesempatan = 3, angka_acak;
  char gacha, lagi;
  string hasil;

  string tier[7] = { "SSR", "SS", "S", "A", "B", "C", "D" };
  int kelangkaan[7] = { 2, 5, 15, 25, 50, 70, 100 };

  awal:
  CLEAR;

  garis();

  cout << "                       SISTEM GACHA" << endl;

  garis();

  for (int i = 0; i < 7; i++)
    cout << "Tier " << left << setw(5) << tier[i] << " : <" << kelangkaan[i] << "%\n";

  cout << "\nKamu hanya bisa gacha " << sisa_kesempatan << " kali kesempatan." << endl;

  garis();

  while (sisa_kesempatan > 0) {
    angka_acak = rand() % 100; // 0-99

    if (angka_acak <= kelangkaan[0])
      hasil = tier[0];
    else if (angka_acak <= kelangkaan[1])
      hasil = tier[1];
    else if (angka_acak <= kelangkaan[2])
      hasil = tier[2];
    else if (angka_acak <= kelangkaan[3])
      hasil = tier[3];
    else if (angka_acak <= kelangkaan[4])
      hasil = tier[4];
    else if (angka_acak <= kelangkaan[5])
      hasil = tier[5];
    else
      hasil = tier[6];

    cout << "Sisa kesempatan gacha: " << sisa_kesempatan << endl;

    cout << "Mau gacha lagi? [Y/T]: "; cin >> gacha;
    if (tolower(gacha) == 't') break;

    cout << "Kamu mendapatkan tier \"" << hasil << "\" dengan kelangkaan " << angka_acak << "%\n";

    if (sisa_kesempatan > 1) cout << endl;

    sisa_kesempatan--;
  }

  garis();

  cout << "             Terima kasih sudah berkunjung!" << endl;

  garis();

  cout << "\nIngin mengulang gacha? [Y/T]: "; cin >> lagi;
  if (tolower(lagi) == 'y') {
    sisa_kesempatan = 3;
    goto awal;
  }

  return 0;
}
