#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#ifdef _WIN32
  #define CLEAR system("cls");
#else
  #define CLEAR system("clear");
#endif

void garis() {
  cout << "-----------------------------------------------------------" << endl;
}

void garis2() {
  cout << "===========================================================" << endl;
}

void judul() {
  garis2();
  cout << "                     TOKO SEMBAKO" << endl;
  garis2();
}

void trms() {
  garis2();
  cout << "                     TERIMAKASIH" << endl;
  garis2();
}

int ttlBlnj(int jmlbl, int hrg) {
  return jmlbl * hrg;
}

int main() {
  string nm, nmbrg, bns;
  int jml, hrg, plh, ttl, ub, uk;
  char lagi;

  string barang[5] = {
    "Piring",
    "Sendok",
    "Garpu",
    "Tumbler (TUKU)",
    "Wajan"
  };

  int harga[5] = {
    10000,
    5000,
    6000,
    350000,
    45000
  };

awal:
  CLEAR;

  judul();

  cout << left << setw(4) << "No."
      << setw(14) << "Nama Barang"
      << right << setw(11) << "" << "Harga Barang"
      << endl;
  garis();

  for (int i = 0; i < 5; i++) {
    cout << left << setw(4) << i + 1
        << left << setw(14) << barang[i]
        << right << setw(14) << "Rp." << harga[i]
        << endl;
  }

  garis();

  cout << "Nama pembeli             : "; cin >> nm;
  cout << "Pilih barang [1/2/3/4/5] : "; cin >> plh;
  cout << "Jumlah beli              : "; cin >> jml;

  garis();

  hrg = harga[plh-1];
  ttl = ttlBlnj(jml, hrg);

  bns = ttl >= 500000 ? "Payung"
    : ttl >= 300000 ? "Gelas"
    : "Maaf anda tidak mendapatkan bonus";

  CLEAR;

  judul();

  cout << "Nama pembeli   : " << nm << endl;
  cout << "Barang dipilih : " << barang[plh-1] << endl;
  cout << "Harga barang   : " << hrg << endl;

  garis();

  cout << "Bonus          : " << bns << endl;

  garis();

  cout << "Total harga    : Rp." << ttl << endl;

  garis();

  cout << "Uang bayar     : Rp."; cin >> ub;
  uk = ub - ttl;
  cout << "Uang kembali   : Rp." << uk << endl;

  trms();

  cout << "\nIngin beli lagi? [Y/T]: "; cin >> lagi;

  if (tolower(lagi) == 'y') goto awal;

  return 0;
}
