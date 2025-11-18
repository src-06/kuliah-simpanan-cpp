#include <iostream>

using namespace std;

int main() {
  for (int a = 1; a <= 10; a += 2) {
    cout << a << " ";
  }

  // Menunggu input agar console tidak langsung menutup
  cin.get(); // Alternatif untuk getch()

  return 0;
}