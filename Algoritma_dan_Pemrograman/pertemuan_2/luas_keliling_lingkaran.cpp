#include <cstdio>
#include <cmath>

int main() {
  // Dekorasi
  printf("\n{ --- Menghitung Luas Dan Keliling Lingkaran -- }\n\n");

  // Deklarasi
  const float pi = 3.14159;
  float diameter, luas, jari_jari, keliling;

  // Masukan ukuran
  printf("Masukan Ukuran Diameter: ");
  scanf("%f", &diameter);

  // Bagian rumus
  jari_jari = diameter / 2;
  luas = pi * sqrtf(jari_jari);
  keliling = pi * diameter;

  // Bagian output data
  printf("\nDiameternya Adalah: %f", diameter);
  printf("\nJari-jarinyanya Adalah: %f", jari_jari);

  // Bagian output luas dan keliling
  printf("\n\nLuasnya Adalah: %f", luas);
  printf("\nKelilingnya Adalah: %f\n", keliling);

  // Dekorasi
  printf("\n{ --------------------------------------------- }\n\n");

  return 0;
}
