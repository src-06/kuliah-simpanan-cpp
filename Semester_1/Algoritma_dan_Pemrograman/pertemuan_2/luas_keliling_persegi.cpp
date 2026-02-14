#include <cstdio>
#include <cmath>

int main() {
  // Dekorasi
  printf("\n{ --- Menghitung Luas Dan Keliling Persegi -- }\n\n");

  // Deklarasi
  float sisi, luas, keliling;

  // Masukan ukuran
  printf("Masukan Ukuran Sisi: ");
  scanf("%f", &sisi);

  // Bagian rumus
  luas = sqrt(sisi);
  keliling = sisi * 4;

  // Bagian output data
  printf("\nSisinya Adalah: %f", sisi);

  // Bagian output luas dan keliling
  printf("\n\nLuasnya Adalah: %f", luas);
  printf("\nKelilingnya Adalah: %f\n", keliling);

  // Dekorasi
  printf("\n{ ------------------------------------------- }\n\n");

  return 0;
}
