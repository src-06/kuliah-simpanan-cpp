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
  string jenis_provider, no_handphone;
  int kode_provider, nominal_pulsa, jumlah_beli, harga_pulsa, total_harga, potongan, total_bayar, uang_bayar, uang_kembali;
  char lagi;

  to_the_top:
  cout << "============================================================" << endl;
  cout << "                Evolution Cellular Shop" << endl;
  cout << "============================================================" << endl;

  cout << "Jenis Provider:\n1. Simpati\n2. IM3\n3. XL" << endl;
  cout << "Pilih Kode Privider [1/2/3]     : ";
  cin >> kode_provider;

  cout << "\nNo Hanphone                   : ";
  cin >> no_handphone;

  cout << "\nPilih Nominal Pulsa [10/20/50]: ";
  cin >> nominal_pulsa;

  cout << "\nJumlah Beli                   : ";
  cin >> jumlah_beli;

  switch (kode_provider) {
    case 1:
      jenis_provider = "Simpati";

      switch (nominal_pulsa) {
        case 10:
          harga_pulsa = 12000;
        break;
        case 20:
          harga_pulsa = 22000;
        break;
        case 50:
          harga_pulsa = 52000;
        break;

        default:
          harga_pulsa = 0;
        break;
      }
    break;
    case 2:
      jenis_provider = "IM3";

      switch (nominal_pulsa) {
        case 10:
          harga_pulsa = 11000;
        break;
        case 20:
          harga_pulsa = 21000;
        break;
        case 50:
          harga_pulsa = 51000;
        break;

        default:
          harga_pulsa = 0;
        break;
      }
    break;
    case 3:
      jenis_provider = "XL";

      switch (nominal_pulsa) {
        case 10:
          harga_pulsa = 11000;
        break;
        case 20:
          harga_pulsa = 22000;
        break;
        case 50:
          harga_pulsa = 52000;
        break;

        default:
          harga_pulsa = 0;
        break;
      }
    break;

    default:
      jenis_provider = "Tidak valid";
    break;
  }

  total_harga = harga_pulsa * jumlah_beli;

  if (total_harga >= 5000)
    potongan = total_harga * 0.1;
  else potongan = 0;

  total_bayar = total_harga - potongan;

  CLEAR();

  cout << "============================================================" << endl;
  cout << "                Evolution Cellular Shop" << endl;
  cout << "============================================================" << endl;

  cout << "No Handphone                    : " << no_handphone << endl;
  cout << "Jenis Provider                  : " << jenis_provider << endl;
  cout << "Nominal Pulsa                   : " << nominal_pulsa << endl;
  cout << "Harga Pulsa                     : Rp. " << harga_pulsa << endl;
  cout << "Jumlah Beli                     : " << jumlah_beli << endl;

  cout << "============================================================" << endl;

  cout << "Total Harga                     : Rp. " << total_harga << endl;
  cout << "Potongan                        : Rp. " << potongan << endl;
  cout << "Total Bayar                     : Rp. " << total_bayar << endl;

  cout << "============================================================" << endl;

  cout << "Uang Bayar                      : Rp. ";
  cin >> uang_bayar;

  uang_kembali = uang_bayar - total_bayar;

  cout << "No Handphone                    : Rp. " << uang_kembali << endl;

  cout << "============================================================" << endl;

  cout << "               Beli Pulsa Baru Bicara..." << endl;

  cout << "\nNama: Farell Reyhan Prandana (312500013)" << endl;
  cout << "Prodi: Teknik Rekayasa Perangkat Lunak" << endl;

  cout << "\nIngin Beli Lagi [Y/T]         : ";
  cin >> lagi;

  if (lagi == 'Y' || lagi == 'y') {
    CLEAR();
    goto to_the_top;
  }

  return 0;
}
