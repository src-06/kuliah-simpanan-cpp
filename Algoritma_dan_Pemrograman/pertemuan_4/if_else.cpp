#include <iostream>

void if_else() {
  std::string password;
  printf("========== LOGIN ==========\n");

  while (true) {
    printf("Masukan Password: ");
    std::cin>>password;

    // percabangan if/else
    if (password == "rara") {
      printf("Password benar\n");
      break;
    } else {
      printf("Password salah\n");
    }
  }

  printf("Teriamakasih telah menggunakan aplikasi ini\n");
}