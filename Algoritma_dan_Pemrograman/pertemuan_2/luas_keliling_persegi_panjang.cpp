#include <cstdio>
#include <cmath>

int main() {
  // Dekorasi
  printf("\n{ --- Menghitung Luas Dan Keliling Persegi Panjang -- }\n\n");

  // Deklarasi
  float panjang, lebar, luas, keliling;

  // Masukan ukuran
  printf("Masukan Ukuran Panjang: ");
  scanf("%f", &panjang);
  printf("Masukan Ukuran Lebar: ");
  scanf("%f", &lebar);

  // Bagian rumus
  luas = panjang * lebar;
  keliling = (panjang + lebar) * 2;

  // Bagian output data
  printf("\nPanjangnya Adalah: %f", panjang);
  printf("\nLebarnya Adalah: %f", lebar);

  // Bagian output luas dan keliling
  printf("\n\nLuasnya Adalah: %f", luas);
  printf("\nKelilingnya Adalah: %f\n", keliling);

  // Dekorasi
  printf("\n{ --------------------------------------------------- }\n\n");

  return 0;
}
