#include <iostream>

using namespace std;

// Alternative untuk system("pause") pada system Unix
// void pause() {
// 	cout << "Tekan tombol apa saja untuk melanjutkan...";
// 	cin.ignore();
// 	cin.get();
// }

int main() {
  string nama, paket, atraksi, bonus;
  int pilih, hrg_paket, hrg_atraksi, potongan = 0, ttl_kslrh, ttl_bayar, uang_byr, uang_kembali;
  char jenis, input;

  while (true) {
    cout << "\033[0;33m                 BIRTHDAY PARTY 4U\n";
    cout << "\033[0;33m-----------------------------------------------------\n";
    cout << "\033[0;32mNama Pemesan: ";
    getline(cin, nama);

    jenis_paket:
    cout << "\033[0;34m\nJenis Paket\n";
    cout << "\033[0;97m[1] \033[0;33mPaket Mewah\033[0;97m, Harga Rp. 2.000.000\n";
    cout << "\033[0;97m[2] \033[0;35mPaket Sedang\033[0;97m, Harga Rp. 1.500.000\n";
    cout << "\033[0;97m[3] \033[0;96mPaket Sederhana\033[0;97m, Harga Rp. 1.000.000\n";
    cout << "\033[0;34mJenis Paket yang dipilih [1/2/3]: ";
    cin >> pilih;

    switch (pilih) {
      case 1:
        paket = "\033[0;33mMewah";
        hrg_paket = 2000000;
      break;
      case 2:
        paket = "\033[0;35mSedang";
        hrg_paket = 1500000;
      break;
      case 3:
        paket = "\033[0;96mSederhana";
        hrg_paket = 1000000;
      break;
      default:
        cout << "\033[0;31mJenis paket tidak ditemukan!!\n\033[0m";
        system("pause");
        // pause();
        system("cls");
        cout << "\033[0;33m                 BIRTHDAY PARTY 4U\n";
        cout << "\033[0;33m-----------------------------------------------------\n";
        cout << "\033[0;36mNama Pemesan: " << pilih << endl;
        goto jenis_paket;
      break;
    }

    jenis_atraksi:
    cout << "\033[0;35m\nJenis Atraksi\n";
    cout << "\033[0;97m[B] \033[0;93mBadut\033[0;97m, Harga Rp. 300.000\n";
    cout << "\033[0;97m[P] \033[0;34mSulap\033[0;97m, Harga Rp. 500.000\n";
    cout << "\033[0;97m[S] \033[0;32mPenyayi Cilik\033[0;97m, Harga Rp. 600.000\n";
    cout << "\033[0;35mJenis Atraksi yang dipilih [B/P/S]: ";
    cin >> jenis;

    switch (toupper(jenis)) {
      case 'B':
        atraksi = "Badut";
        hrg_atraksi = 300000;
      break;
      case 'P':
        atraksi = "Sulap";
        hrg_atraksi = 500000;
      break;
      case 'S':
        atraksi = "Penyayi Cilik";
        hrg_atraksi = 600000;
      break;
      default:
        cout << "\033[0;31mJenis atraksi tidak ditemukan!!\n\033[0m";
        system("pause");
        // pause();
        system("cls");
        cout << "\033[0;33m                 BIRTHDAY PARTY 4U\n";
        cout << "\033[0;33m-----------------------------------------------------\n";
        cout << "\033[0;36mNama Pemesan: " << pilih << endl;
        cout << "\033[0;34m\nJenis Paket";
        cout << "\033[0;97m[1] \033[0;33mPaket Mewah\033[0;97m, Harga Rp. 2.000.000\n";
        cout << "\033[0;97m[2] \033[0;35mPaket Sedang\033[0;97m, Harga Rp. 1.500.000\n";
        cout << "\033[0;97m[3] \033[0;96mPaket Sederhana\033[0;97m, Harga Rp. 1.000.000\n";
        cout << "\033[0;34mJenis Paket yang dipilih [1/2/3]: " << jenis << endl;
        goto jenis_atraksi;
      break;
    }

    ttl_kslrh = hrg_paket + hrg_atraksi;

    if (ttl_kslrh >= 2000000) {
      bonus = "\033[0;93mBlack Forest";
      potongan = ttl_kslrh * 0.1;
    } else {
      bonus = "\033[0;35mMaaf Tidak Dapat Bonus";
      potongan = 0;
    }

    ttl_bayar = ttl_kslrh - potongan;

    system("cls");

    cout << "\033[0;33m                 BIRTHDAY PARTY 4U\n";
    cout << "\033[0;33m-----------------------------------------------------\n";
    cout << "\033[0;96mNama Pemesan            : " << nama << endl;
    cout << "\033[0;96mPaket Pilihanya adalah  : " << paket << endl;
    cout << "\033[0;96mHarga Per-Paket         : " << hrg_paket << endl;
    cout << "\033[0;96mAtraksi Pilihan         : " << atraksi << endl;
    cout << "\033[0;96mHarga Atraksi           : " << hrg_atraksi << endl;
    cout << "\033[0;33m-----------------------------------------------------\n";
    cout << "\033[0;96mBonus                   : " << bonus << endl;
    cout << "\033[0;33m-----------------------------------------------------\n";
    cout << "\033[0;96mTotal Keseluruhan       : " << ttl_kslrh << endl;
    cout << "\033[0;96mPotongan Yang Diperoleh : " << potongan << endl;
    cout << "\033[0;96mTotal Bayar             : " << ttl_bayar << endl;
    cout << "\033[0;96mUang Bayar              : ";
    cin >> uang_byr;
    uang_kembali = uang_byr - ttl_bayar;
    cout << "\033[0;96mUang Kembali            : " << uang_kembali << endl;
    cout << "\033[0;33m-----------------------------------------------------\n";

    input_lagi:
    cout << "\033[0mMau Input Data Lagi [Y/T]: ";
    cin >> input;
    cin.ignore();

    if (toupper(input) == 'Y')
      system("cls");
    else if (toupper(input) == 'T')
      break;
    else {
      cout << "\033[0;31mSalah input harus y/t atau Y/T\n\033[0m";
      system("pause");
      // pause();
      goto input_lagi;
    }
  }

  return 0;
}
