#include <iostream>

int main() {
  int a, b, c = 0, d = 0;

  printf("Masukan Nilai A: \n");
  scanf("%d", &a);
  printf("Masukan Nilai B: \n");
  scanf("%d", &b);

  c = a % b;
  d = a * b;

  printf("Hasil Dari C: %d\n", c);
  printf("Hasil Dari D: %d\n", d);

  return 0;
}
