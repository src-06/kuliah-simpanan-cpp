#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void garis() {
  cout << "------------------------------------------------" << endl;
}

int menghitungTotalBayar(int jml, int hrg) {
  return jml * hrg;
}

int main() {
  int no_trk, hrg, jml, tby, uby, ukbl;
  string name, mrk_hp, tp_hp, knds;
  char reset;

  reset:
  system("clear");

  garis();

  cout << "          Transaksi Penjualan Handphone" << endl;

  garis();

  cout << "Nomor Transaksi        : "; cin >> no_trk; cin.ignore();
  cout << "Nama Pembeli           : "; getline(cin, name);
  cout << "Merk Handphone         : "; getline(cin, mrk_hp);
  cout << "Tipe Handphone         : "; getline(cin, tp_hp);
  cout << "Kondisi [Baru|Second]  : "; getline(cin, knds);
  cout << "Harga                  : "; cin >> hrg;
  cout << "Jumlah Beli            : "; cin >> jml;

  tby = menghitungTotalBayar(jml, hrg);

  garis();

  cout << "Total Bayar            : Rp. " << tby << endl;

  garis();

  cout << "Uang Bayar             : Rp. "; cin >> uby;

  ukbl = uby - tby;

  cout << "Uang Kembali           : Rp. " << ukbl << endl;

  garis();

  cout << "                TERIMAKASIH..." << endl;

  garis();

  cout << "Ingin input lagi [Y/T]: ";
  cin >> reset;

  if (tolower(reset) == 'y')
    goto reset;

  return 0;
}
