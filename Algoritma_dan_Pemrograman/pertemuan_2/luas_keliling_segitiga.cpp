#include <cstdio>
#include <cmath>

int main() {
  // Dekorasi
  printf("\n{ --- Menghitung Luas Dan Keliling Segitiga Siku-Siku -- }\n\n");

  // Deklarasi
  float alas, tinggi, luas, depan, miring, samping, keliling;

  // Masukan ukuran
  printf("Masukan Ukuran Alas: ");
  scanf("%f", &alas);
  printf("Masukan Ukuran Tinggi: ");
  scanf("%f", &tinggi);

  // Bagian rumus
  samping = alas / 2;
  depan = tinggi;
  luas = (alas * tinggi) / 2;
  miring = sqrtf(powf(depan, 2.0) + powf(samping, 2.0));
  keliling = depan + samping + miring;

  // Bagian output data
  printf("\nDepannya Adalah: %f", depan);
  printf("\nSampingnya Adalah: %f", samping);
  printf("\nMiringnya Adalah: %f", miring);

  // Bagian output luas dan keliling
  printf("\n\nLuasnya Adalah: %f", luas);
  printf("\nKelilingnya Adalah: %f\n", keliling);

  // Dekorasi
  printf("\n{ ------------------------------------------------------ }\n\n");

  return 0;
}
