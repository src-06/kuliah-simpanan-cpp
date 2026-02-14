#include <iostream>

using namespace std;

int main() {
  string nama, kode_kue, nama_kue;
  int jml_beli, hrg_kue, jml_byr;

  system("clear");
  cout << "\n           DAFTAR MENU TOKO \"NIKMAT\"\n";
  cout << "*--**--**--**--**--**--**--**--**--**--**--*\n";
  cout << "1. BOLU BLACK FOREST (BB)\n2. CHESEE CAKE (CC)\n3. BANANA CAKE (BC)\n4. STRAWBERI CAKE (SC)\n\n";
  cout << "Nama Pembeli: ";
  cin >> nama;
  cout << "--------------------------------------------\n";
  cout << "Kode Kue: ";
  cin >> kode_kue;
  cout << "Jumlah Beli: ";
  cin >> jml_beli;

  if (kode_kue == "BB" || kode_kue == "bb") {
    nama_kue = "BOLU BLACK FOREST";
    kode_kue = "BB";
    hrg_kue = 60000;
  } else if (kode_kue == "CC" || kode_kue == "cc") {
    nama_kue = "CHESEE CAKE";
    kode_kue = "cc";
    hrg_kue = 45000;
  } else if (kode_kue == "BC" || kode_kue == "bc") {
    nama_kue = "BANANA CAKE";
    kode_kue = "BB";
    hrg_kue = 25500;
  } else if (kode_kue == "SC" || kode_kue == "sc") {
    nama_kue = "STRAWBERI CAKE";
    kode_kue = "BB";
    hrg_kue = 35000;
  }

  jml_byr = hrg_kue * jml_beli;

  system("clear");

  cout << "\n              TOKO \"NIKMAT\"\n";
  cout << "             STRUK PEMBAYARAN\n";
  cout << "*--**--**--**--**--**--**--**--**--**--**--*\n";
  cout << "Nama Pembeli: " << nama << endl;
  cout << "Kode Kue: " << kode_kue << endl;
  cout << "Harga Kue: Rp. " << hrg_kue << endl;
  cout << "Jumlah Kue: " << jml_beli << endl;
  cout << "--------------------------------------------\n";
  cout << "Jumlah Bayar: Rp. " << jml_byr << endl;
  cout << "\n     TERIMAKASIH ATAS KUNJUNGANNYA\n";
}
