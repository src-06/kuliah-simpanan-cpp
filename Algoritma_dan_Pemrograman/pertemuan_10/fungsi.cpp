#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void garis() {
  cout << "--------------------------------------------------" << endl;
}

int hitungRata(int uts, int uas) {
  return (uts + uas) / 2;
}

int main() {
  string nim, nama;
  int uts, uas, rata;
  char ulang;

  ulang:
  system("clear"); // windows = system("cls")

  garis();
  cout << "         PROGRAM NILAI MAHASISWA" << endl;
  garis();

  cout << "Masukan NIM: ";
  cin >> nim;

  cin.ignore();
  cout << "Masukan Nama: ";
  getline(cin, nama);

  cout << "Nilai UTS: ";
  cin >> uts;

  cout << "Nilai UAS: ";
  cin >> uas;

  rata = hitungRata(uts, uas);

  garis();
  cout << "NIM: " << nim << endl;
  cout << "Nama: " << nama << endl;
  cout << "Nilai Rata-Rata: " << rata << endl;
  garis();

  if (rata > 60)
    cout << "Status : LULUS" << endl;
  else
    cout << "Status : GAGAL" << endl;

  garis();
  cout << "Input data lagi? (Y/T): ";
  cin >> ulang;

  if (tolower(ulang) == 'y')
    goto ulang;

  return 0;
}
