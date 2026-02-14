#include <iostream>

void ternary() {
  int jawaban;
  printf("Berapakah hasil 3+4?\n");
  printf("Jawab: ");
  scanf("%d", &jawaban);

  std::string hasil = (jawaban == 7) ? "Benar" : "Salah";
  std::cout<<"Jawaban anda: "<<hasil<<std::endl;
}