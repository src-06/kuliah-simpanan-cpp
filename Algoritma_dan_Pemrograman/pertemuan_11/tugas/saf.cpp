#include <iostream>
#include <limits> // Untuk numeric_limits
#include <iomanip>

using namespace std;

// Alternatif clear and pause untuk lintas sistem operasi
inline void clear() { cout << "\033[2J\033[H"; }
inline void pause() { cout << "Tekan tombol Enter untuk melanjutkan..."; cin.get(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); }

void garis() {
  cout << "------------------------------------------------------------------\n";
}

struct DataExpedisi {
  int kode_kota;
  string nama_kota;
  int harga_barang;
  int berat_barang;
};

int main() {
  string nama_pelanggan, tanggal_pengiriman;
  int jumlah_barang;

  awal:
  clear();
  cout << "                   LIGHT UP EXPEDITION\n";
  cout << "==================================================================\n";

  cout << "Nama Pelanggan       : "; getline(cin, nama_pelanggan);
  cout << "Tanggal pengiriman   : "; getline(cin, tanggal_pengiriman);
  cout << "Jumlah barang        : "; cin >> jumlah_barang;

  garis();

  DataExpedisi brg[jumlah_barang];
  cin.ignore();

  for (int UwU = 0; UwU < jumlah_barang; UwU++) {
    cout << "Data Barang Ke-" << UwU + 1 << endl;
    cout << "Kota Tujuan\n[1] Bandung\n[2] Semarang\n[3] Yogya\n";
    cout << "Kode kota tujuan     : "; cin >> brg[UwU].kode_kota;
    cout << "Berat barang         : "; cin >> brg[UwU].berat_barang;

    switch (brg[UwU].kode_kota) {
      case 1:
        brg[UwU].nama_kota = "Bandung";

        if (brg[UwU].berat_barang >= 100)
          brg[UwU].harga_barang = 40000;
        else if (brg[UwU].berat_barang >= 40)
          brg[UwU].harga_barang = 20000;
        else brg[UwU].harga_barang = 10000;
      break;

      case 2:
        brg[UwU].nama_kota = "Semarang";

        if (brg[UwU].berat_barang >= 100)
          brg[UwU].harga_barang = 75000;
        else if (brg[UwU].berat_barang >= 40)
          brg[UwU].harga_barang = 30000;
        else brg[UwU].harga_barang = 20000;
      break;

      case 3:
        brg[UwU].nama_kota = "Yogya";

        if (brg[UwU].berat_barang >= 100)
          brg[UwU].harga_barang = 80000;
        else if (brg[UwU].berat_barang >= 40)
          brg[UwU].harga_barang = 40000;
        else brg[UwU].harga_barang = 30000;
      break;

      default:
        brg[UwU].nama_kota = "Kode kota tidak valid!!!";
        brg[UwU].harga_barang = 0;
      break;
    }

    cin.ignore();
    if (UwU < jumlah_barang-1) cout << endl;
  }

  clear();
  cout << " Faktur Pengiriman Barang\n";
  cout << "--------------------------\n";

  cout << "Nama Pelanggan       : " << nama_pelanggan << endl;
  cout << "Tanggal Pemngiriman  : " << nama_pelanggan << endl;

  garis();

  cout << left << setw(3) << "No"
    << setw(20) << "Kota Tujuan"
    << setw(10) << "Berat"
    << setw(18) << "Harga"
    << endl;

  garis();

  int total_harga = 0;

  for (int OwO = 0; OwO < jumlah_barang; OwO++) {
    total_harga += brg[OwO].harga_barang;

    cout  << left  << setw(1) << OwO + 1
      << setw(2) << "."
      << setw(20) << brg[OwO].nama_kota
      << setw(5) << brg[OwO].berat_barang
      << setw(5) << "Kg"
      << setw(3) << "Rp."
      << setw(6) << brg[OwO].harga_barang
      << endl;
  }

  garis();

  int pajak = 0.1 * total_harga;

  cout << "Total harga  : Rp." << total_harga << endl;
  cout << "Pajak        : Rp." << pajak << endl;
  cout << "Total bayar  : Rp." << total_harga + pajak << endl;

  garis();

  char lagi;
  cout << "Ingin input data lagi? [Y/T] "; cin >> lagi;
  if (tolower(lagi) == 'y') goto awal;

  pause();
  return 0;
}
