#include <iostream>

using namespace std;

int main() {
  string nama_penumpang, nama_pesawat;
  char input_data_lagi;
  bool input_data;
  int kode_pesawat, jml_tiket, harga_tiket, jml_bayar, ttl_ppn, biaya_bersih, uang_bayar, uang_kembali;
  const float ppn = 0.1;

  while (true) {
    printf("\033[96m\033[1m\n        Program Penjualan Tiket\033[0m\n");
    printf("\033[96m\033[1m          Bandara Sri Sultan\033[0m\n\n");
    printf("\033[32mNama penumpang    : ");
    // getline(cin, nama_penumpang);
    cin>>nama_penumpang;
    printf("\033[33mKode Pesawat [1-4]: ");
    scanf("%d", &kode_pesawat);
    printf("\033[95mJumlah Tiket      : ");
    scanf("%d", &jml_tiket);

    if (kode_pesawat == 1) {
      nama_pesawat = "\033[31mGaruda \033[0mIndonesia";
      harga_tiket = 275000;
    } else
    if (kode_pesawat == 2) {
      nama_pesawat = "\033[90mMandala";
      harga_tiket = 230000;
    } else
    if (kode_pesawat == 3) {
      nama_pesawat = "\033[0mMerpati";
      harga_tiket = 185000;
    } else
    if (kode_pesawat == 4) {
      nama_pesawat = "\033[0mLion \033[31mAir";
      harga_tiket = 150000;
    } else
    {
      nama_pesawat = "\033[31mKode Pesawat Tidak Ditemukan";
      harga_tiket = 0;
    }

    jml_bayar = harga_tiket * jml_tiket;
    ttl_ppn = jml_bayar * ppn;
    biaya_bersih = jml_bayar + ttl_ppn;

    system("cls");

    printf("\033[96m\033[1m\n        Program Penjualan Tiket\033[0m\n");
    printf("\033[96m\033[1m          Bandara Sri Sultan\033[0m\n\n");
    printf("\033[34m\033[1m---------------------------\033[0m\n");
    cout<<"\033[93mPesawat Yang Dipilih    : "<<nama_pesawat<<endl;
    printf("\033[32mRincian Penjualan Tiket :\n");
    printf("\033[34m\033[1m---------------------------\033[0m\n");
    printf("\033[95mHarga Tiket  : Rp. %d\n", harga_tiket);
    printf("\033[36mJumlah Bayar : Rp. %d\n", jml_bayar);
    printf("\033[91mPPN          : Rp. %d\n", ttl_ppn);
    printf("\033[34m\033[1m---------------------------\033[0m\n");
    printf("\033[92mBiaya Bersih : Rp. %d\n", biaya_bersih);
    printf("\033[90mUang Bayar   : Rp. ");
    scanf("%d", &uang_bayar);
    uang_kembali = uang_bayar - biaya_bersih;
    printf("\033[96mUang Kembali : Rp. %d\n\n", uang_kembali);
    printf("\033[34m\033[1m---------------------------\033[0m\n");

    for (int _ = 0; _ < 1; _++) {
      printf("\033[94mIngin Input Data Lagi [Y/T]: \033[0m");
      cin>>input_data_lagi;

      if (toupper(input_data_lagi) == 'T') {
        input_data = true;
      } else if (!(toupper(input_data_lagi) == 'Y')) {
        printf("\033[31mInput Salah!! Harus huruf Y/T atau y/t\033[0m\n");
        _--;
      }
    }

    cout<<endl;
    if (input_data) break;
    system("cls");
  }

  return 0;
}
