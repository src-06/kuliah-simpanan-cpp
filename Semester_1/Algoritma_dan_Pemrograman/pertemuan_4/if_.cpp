#include <iostream>

void if_() {
  printf("\n=== Program Pembayaran ===\n");
  unsigned int total_belanja;
  printf("Masukan total belanja: ");
  scanf("%d", &total_belanja);
  // Menggunakan gabungan if
  if (total_belanja > 100000) {
    printf("Selamat! anda dapat hadiah\n");
  }
  printf("Terimakasih sudah berbelanja di toko kami\n");
}