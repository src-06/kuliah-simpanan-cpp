#include <iostream>

using namespace std;

int main() {
  int number[] = {1, 2, 3};

  cout << "Hasil sebelum diubah:\n";
  for (int _ = 0; _ < 3; _++) {
    cout << _ + 1 << ". " << number[_] << endl;
  }

  cout << "\nMasukan angka untuk diubah:\n";
  for (int _ = 0; _ < 3; _++) {
    cout << "Index ke-" << _ + 1 << ": ";
    cin >> number[_];
  }

  cout << "\nHasil setelah diubah:\n";
  for (int _ = 0; _ < 3; _++) {
    cout << _ + 1 << ". " << number[_] << endl;
  }

  return 0;
}
