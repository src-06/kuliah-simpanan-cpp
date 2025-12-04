#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void garis() {
  cout << "-----------------------------------------------------------" << endl;
}

void judul() {
  garis();
  cout << "                     TOKO SEMBAKO" << endl;
  garis();
}

void trms() {
  garis();
  cout << "                     TERIMAKASIH" << endl;
  garis();
}

int ttlBlnj(int jmlbl, int hrg) {
  return jmlbl*hrg;
}

int main() {
  string nm,nmbrg,bns;
  int jml,hrg,plh,ttl,ub,uk;
  char lagi;
  string barang[5] = {
    "Piring",
    "Sendok",
    "Garpu",
    "Tubler",
    "Wajan"
  };

  int harga[5] = {
    10000,
    5000,
    6000,
    35000,
    45000
  };

awal:
  judul();

  for (int i = 0; i < 5; i++)
    cout << i + 1 << ". " << barang[i] << endl;

  garis();

  cout << "Nama pembeli             : "; cin >> nm;
  cout << "Pilih barang [1/2/3/4/5] : "; cin >> plh;
  cout << "Jumlah beli              : "; cin >> jml;

  garis();

  system("clear");

  judul();

  cout << "Nama pembeli:" << nm << endl;
  cout << "Barang dipilih:" << nmbrg << endl;
  cout << "Harga barang:" << hrg << endl;

  garis();

  cout << "Bonus:" << bns << endl;

  garis();

  cout << "Total harga: Rp." << ttl << endl;

  garis();

  cout << "Uang bayar: Rp."; cin >> ub;
  uk = ub - ttl;
  cout << "Uang kembali: Rp." << uk << endl;

  trms();
}
