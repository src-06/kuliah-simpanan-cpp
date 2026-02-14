#include <iostream>

void if_else_if() {
  int nilai;
  std::string grade;
  printf("=== Program Grde Nilai\n");
  printf("Inputkan nilai terakhir: ");
  scanf("%d", &nilai);

  // menggunakan percabangan if/else
  if (nilai >= 90) { grade = "A"; } else
  if (nilai >= 80) { grade = "B+"; } else
  if (nilai >= 70) { grade = "B"; } else
  if (nilai >= 60) { grade = "C+"; } else
  if (nilai >= 50) { grade = "C"; } else
  if (nilai >= 40) { grade = "D"; } else
  if (nilai >= 30) { grade = "E"; } else
  { grade = "F"; }

  // printf("Grade anda: %s", grade);
  std::cout<<"Grade anda: "<<grade<<std::endl;
}