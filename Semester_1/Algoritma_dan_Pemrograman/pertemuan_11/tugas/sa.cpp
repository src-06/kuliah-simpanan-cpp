#include <iostream>
#include <limits> // Untuk numeric_limits
#include <iomanip>

using namespace std;

// Alternatif clear and pause untuk lintas sistem operasi
inline void clear() { cout << "\033[2J\033[H"; }
inline void pause() { cout << "Tekan tombol Enter untuk melanjutkan..."; cin.get(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); }

void garis() {
  cout << "----------------------------------------------------------------------------------------------\n";
}

void judul() {
  cout << "                               SE7EN Season DVD Rental\n";
  cout << "==============================================================================================\n";
}

struct DataDVD {
  string judul_film;
  string genre_film;
  string jenis_film;
  int harga_film;
  int lama_sewa_film;
};

int main() {
  string nama_penyewa, tanggal_sewa;
  int jumlah_data;

  awal:
  clear();
  judul();

  cout << "Tanggal sewa         : "; getline(cin, tanggal_sewa);
  cout << "Nama Penyewa         : "; getline(cin, nama_penyewa);
  cout << "Masukan jumlah sewa  : "; cin >> jumlah_data;

  garis();

  DataDVD dvd[jumlah_data];
  cin.ignore();

  int pilih_jenis_film;

  for (int UwU = 0; UwU < jumlah_data; UwU++) {
    cout << "Data DVD Ke-" << UwU + 1 << endl;
    cout << "Judul Film           : "; getline(cin, dvd[UwU].judul_film);
    cout << "Genre                : "; getline(cin, dvd[UwU].genre_film);
    cout << "Jenis\n[1] New Release\n[2] Recent Release\n[3] Katalog\n";
    cout << "Pilih Jenis Film     : "; cin >> pilih_jenis_film;

    switch (pilih_jenis_film) {
      case 1:
        dvd[UwU].jenis_film = "New Release";
        dvd[UwU].harga_film = 5000;
      break;
      case 2:
        dvd[UwU].jenis_film = "Recent Release";
        dvd[UwU].harga_film = 3000;
      break;
      case 3:
        dvd[UwU].jenis_film = "Katalog";
        dvd[UwU].harga_film = 2000;
      break;

      default:
        dvd[UwU].jenis_film = "Jenis film tidak valid!!!";
      break;
    }

    cout << "Lama Sewa            : "; cin >> dvd[UwU].lama_sewa_film;
    cin.ignore();
    if (UwU < jumlah_data-1) cout << endl;
  }

  clear();
  judul();

  cout << "Tanggal sewa   : " << tanggal_sewa << endl;
  cout << "Nama penyewa   : " << nama_penyewa << endl;

  garis();

  cout << left << setw(3) << "No"
    << setw(30) << "Judul Film"
    << setw(14) << "Genre"
    << setw(18) << "Jenis"
    << setw(9) << "Harga"
    << setw(9) << "Lama"
    << setw(15) << "Subtotal"
    << endl;

  garis();

  int subtotal, total_bayar = 0;

  for (int OwO = 0; OwO < jumlah_data; OwO++) {
    subtotal = dvd[OwO].harga_film * dvd[OwO].lama_sewa_film;
    total_bayar += subtotal;

    cout  << left  << setw(1) << OwO + 1
      << setw(2) << "."
      << setw(30) << dvd[OwO].judul_film
      << setw(14) << dvd[OwO].genre_film
      << setw(18) << dvd[OwO].jenis_film
      << setw(3) << "Rp."
      << setw(6) << dvd[OwO].harga_film
      << setw(2) << dvd[OwO].lama_sewa_film
      << setw(7) << " hari"
      << setw(3) << "Rp."
      << setw(7) << subtotal
      << endl;
  }

  garis();

  int potongan = 0;
  if (jumlah_data >= 5) potongan = 0.1 * total_bayar;

  cout << "Total bayar    : Rp." << total_bayar << endl;
  cout << "Potongan       : Rp." << potongan << endl;
  cout << "Jumlah bayar   : Rp." << total_bayar - potongan << endl;

  garis();

  char lagi;
  cout << "Ingin input data lagi? [Y/T] "; cin >> lagi;
  if (tolower(lagi) == 'y') goto awal;

  pause();
  return 0;
}
