#include <iostream>

using namespace std;

void nested_if() {
  string username, password;

  printf("\n=== Welcome ===\n\n");

  while (true) {
    printf("Username: ");
    getline(cin, username);
    printf("Password: ");
    getline(cin, password);

    if (username == "wiwo") {
      if (password == "deto") {
        printf("\nSelamat datang!\n\n");
        break;
      } else {
        printf("\nPassword salah\n\n");
      }
    } else {
      printf("\nUsername tidak terdaftar\n\n");
    }
  }
}
