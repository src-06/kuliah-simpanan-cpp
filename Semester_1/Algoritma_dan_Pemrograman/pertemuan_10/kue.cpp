#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

void garis() {
  cout << "----------------------------------------------------" << endl;
}

int hitung(int hrg, int jml) {
  return hrg * jml;
}

string namaKue(char kode[3]) {
  if (!strcmp(kode, "BB") || !strcmp(kode, "bb"))
    return "Bolu Black Forest";
  else if (!strcmp(kode, "CC") || !strcmp(kode, "cc"))
    return "Chesse Cake";
  else if (!strcmp(kode, "BC") || !strcmp(kode, "bc"))
    return "Banana Cake";
  else
    return "Strawberry Cake";
}

int hargaKue(char kode[3]) {
  if (!strcmp(kode, "BB") || !strcmp(kode, "bb"))
    return 65000;
  else if (!strcmp(kode, "CC") || !strcmp(kode, "cc"))
    return 45000;
  else if (!strcmp(kode, "BC") || !strcmp(kode, "bc"))
    return 25000;
  else
    return 35000;
}

int main() {
  awal:
  system("clear");

  char kode[3], ulang;
  string nama;
  int jml, ttl;

  cout << "DAFTAR MENU TOKO KUE NIKMAT\n";
  garis();
  cout << "1. Bolu Black Forest (BB)\n";
  cout << "2. Chesse Cake (CC)\n";
  cout << "3. Banana Cake (BC)\n";
  cout << "4. Strawberry Cake (SC)\n\n";

  cout << "Nama Pembeli: "; cin.ignore(); getline(cin, nama);
  garis();
  cout << "Kode Kue: "; cin >> kode;
  cout << "Jumlah Beli: "; cin >> jml;

  ttl = hitung(hargaKue(kode), jml);

  system("clear");

  cout << "TOKO KUE NIKMAT\n";
  cout << "STRUK PEMBAYARAN\n";
  garis();

  cout << "Nama Pembeli: " << nama << endl;
  cout << "Kode Kue: " << kode << endl;
  cout << "Nama Kue: " << namaKue(kode) << endl;
  cout << "Harga Kue: Rp. " << hargaKue(kode) << endl;
  cout << "Jumlah Kue: " << jml << endl;

  garis();
  cout << "Total Bayar: Rp. " << ttl << endl;
  garis();

  cout << "Ingin input data lagi? [Y/T]: ";
  cin >> ulang;

  if (tolower(ulang) == 'y')
    goto awal;

  return 0;
}
