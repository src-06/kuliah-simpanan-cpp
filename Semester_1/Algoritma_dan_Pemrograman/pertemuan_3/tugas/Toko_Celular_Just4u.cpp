#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  string nama_merek, nama_type;
  int merek, type, harga, uang_bayar, uang_kembali, jmlh_beli, jmlh_byr, ttl_byr, ttl_ppn;
  const float ppn = 0.1;

  printf("\nFarell Reyhan Pradana\n");
  printf("Prodi: TRPL\n\n");

  printf("<|---------- Toko Celular Just4u -----------|>\n\n");

  printf("Merek Handphone Yang Tersedia:\n1. Vivo\n2. Xiaomi\n3. Oppo\n4. Huawei\n");
  printf("Pilih Merek: ");
  scanf("%d", &merek);

  printf("\n<|------------------------------------------|>\n\n");

  printf("Tipe Handphone Yang Tersedia:\n1. Flagship\n2. Mid-Range\n3. Low-Range\n");
  printf("Pilih Tipe: ");
  scanf("%d", &type);

  printf("\n<|------------------------------------------|>\n\n");

  switch (type) {
    case 1: printf("Harga Flagship Handphone: Rp 11.000.000.\n"); harga = 11000000; break;
    case 2: printf("Harga Mid-Range Handphone: Rp 6.000.000.\n"); harga = 6000000; break;
    case 3: printf("Harga Low-Range Handphone: Rp 2.200.000.\n"); harga = 2200000; break;
    default: printf("Harga untuk type merek tidak ditemukan"); break;
  }

  printf("Jumlah beli handpone: ");
  scanf("%d", &jmlh_beli);

  switch (merek) {
    case 1: nama_merek = "Vivo"; break;
    case 2: nama_merek = "Xiaomi"; break;
    case 3: nama_merek = "Oppo"; break;
    case 4: nama_merek = "Huawei"; break;
    default: nama_merek = "Merek Tidak Ditemukan"; break;
  }

  switch (type) {
    case 1: nama_type = "Flagship"; break;
    case 2: nama_type = "Mid-Range"; break;
    case 3: nama_type = "Low-Range"; break;
    default: nama_type = "Type Tidak Ditemukan"; break;
  }

  printf("\n<|------------------------------------------|>\n\n");
  cout<<"Handphone yang dipilih: "<<nama_merek<<" type "<<nama_type<<endl;

  jmlh_byr = harga * jmlh_beli;
  ttl_ppn = jmlh_byr * ppn;
  ttl_byr = jmlh_byr + ttl_ppn;

  printf("Jumlah bayar: %d\n", jmlh_byr);
  printf("Harga PPN (10%): %d\n", ttl_ppn);
  printf("Total bayar: %d\n\n", ttl_byr);
  printf("<|------------------------------------------|>\n\n");

  printf("Uang bayar: ");
  scanf("%d", &uang_bayar);

  uang_kembali = uang_bayar - ttl_byr;

  printf("Uang kembali: %d\n\n", uang_kembali);

  printf("<|---------- Toko Celular Just4u -----------|>\n\n");

  return 0;
}
