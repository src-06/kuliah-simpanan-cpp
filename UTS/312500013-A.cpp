#include <iostream>

using namespace std;

#ifdef _WIN32
  // Untuk Windows
  #define CLEAR() system("cls")
#else
  // Untuk Unix/Linux/Mac
  #define CLEAR() system("clear")
#endif

int main() {
  string nama, judul_konser, jenis_tiket;
  int kode_konser, kode_tiket, jumlah_beli, harga_tiket, total_harga, potongan, total_bayar, uang_bayar, uang_kembali;
  char lagi;

  to_the_top:
  cout << "============================================================" << endl;
  cout << "                Penjualan Tiket Konser" << endl;
  cout << "============================================================" << endl;

  cout << "Masukkan Nama Pembeli       : ";
  getline(cin, nama);

  cout << "\nJudul Konser:\n1. Java Jazz Festival\n2. Young Diva In Concert\n3. LA Light IndieFest" << endl;
  cout << "Masukkan Kode Konser [1/2/3]: ";
  cin >> kode_konser;

  cout << "\nJenis Tiket:\n1. Trbune\n2. VIP\n3. VVIP" << endl;
  cout << "Masukkan Jenis Tiket [1/2/3]: ";
  cin >> kode_tiket;

  cout << "\nJumlah beli               : ";
  cin >> jumlah_beli;

  switch (kode_konser) {
    case 1:
      judul_konser = "Java Jazz Festival";

      switch (kode_tiket) {
        case 1:
          jenis_tiket = "Tribune";
          harga_tiket = 50000;
          break;
        break;
        case 2:
          jenis_tiket = "VIP";
          harga_tiket = 75000;
        break;
        case 3:
          jenis_tiket = "VVIP";
          harga_tiket = 100000;
        break;

        default:
          jenis_tiket = "Tidak valid";
          harga_tiket = 0;
        break;
      }
    break;
    case 2:
      judul_konser = "Young Diva In Concert";

      switch (kode_tiket) {
        case 1:
          jenis_tiket = "Tribune";
          harga_tiket = 50000;
          break;
        break;
        case 2:
          jenis_tiket = "VIP";
          harga_tiket = 10000;
        break;
        case 3:
          jenis_tiket = "VVIP";
          harga_tiket = 150000;
        break;

        default:
          jenis_tiket = "Tidak valid";
          harga_tiket = 0;
        break;
      }
    break;
    case 3:
      judul_konser = "LA Light IndieFest";

      switch (kode_tiket) {
        case 1:
          jenis_tiket = "Tribune";
          harga_tiket = 50000;
          break;
        break;
        case 2:
          jenis_tiket = "VIP";
          harga_tiket = 90000;
        break;
        case 3:
          jenis_tiket = "VVIP";
          harga_tiket = 130000;
        break;

        default:
          jenis_tiket = "Tidak valid";
          harga_tiket = 0;
        break;
      }
    break;

    default:
      judul_konser = "Tidak valid";
    break;
  }

  total_harga = harga_tiket * jumlah_beli;

  if (jumlah_beli >= 5)
    potongan = total_harga * 0.1;
  else potongan = 0;

  total_bayar = total_harga - potongan;

  CLEAR();

  cout << "============================================================" << endl;
  cout << "                Penjualan Tiket Konser" << endl;
  cout << "============================================================" << endl;

  cout << "Nama Pembeli                : " << nama << endl;
  cout << "Judul Konser                : " << judul_konser << endl;
  cout << "Jenis Tiket                 : " << jenis_tiket << endl;
  cout << "Harga Tiket                 : Rp. " << harga_tiket << endl;
  cout << "Jumlah Beli                 : " << jumlah_beli << endl;

  cout << "============================================================" << endl;

  cout << "Total Harga                 : Rp. " << total_harga << endl;
  cout << "Potongan                    : Rp. " << potongan << endl;
  cout << "Total Bayar                 : Rp. " << total_bayar << endl;

  cout << "============================================================" << endl;

  cout << "Uang Bayar                  : Rp. ";
  cin >> uang_bayar;

  uang_kembali = uang_bayar - total_bayar;

  cout << "Uang Kembali                : Rp. " << uang_kembali << endl;

  cout << "============================================================" << endl;

  cout << "             Have Fun And Enjoy The Show..." << endl;

  cout << "\nNama: Farell Reyhan Prandana (312500013)" << endl;
  cout << "Prodi: Teknik Rekayasa Perangkat Lunak" << endl;

  cout << "\nIngin Beli Lagi [Y/T]     : ";
  cin >> lagi;

  if (lagi == 'Y' || lagi == 'y') {
    CLEAR();
    goto to_the_top;
  }

  return 0;
}
