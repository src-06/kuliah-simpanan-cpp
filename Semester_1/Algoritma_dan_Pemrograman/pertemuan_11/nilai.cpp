#include <iostream>

using namespace std;

int menghitungRata(int arr[], int n) {
  int total = 0;
  for (int i = 0; i < n; i++)
    total += arr[i];
  return total / n;
}

int main() {
  int _W_; cout << "Masukkan banyaknya nilai: "; cin >> _W_;
  int nilai[_W_];
  cout << endl;

  for (int _P_ = 0; _P_ < _W_; _P_++) {
    cout << "Masukkan nilai ke-" << _P_ + 1 << ": ";
    cin >> nilai[_P_];
  }

  int rata = menghitungRata(nilai, _W_);

  cout << "\nHasil rata-rata nilai: " << rata << " -> ";
  if (rata >= 90)
    cout << "Sangat Baik" << endl;
  else if (rata >= 80)
    cout << "Baik" << endl;
  else if (rata >= 70)
    cout << "Cukup" << endl;
  else
    cout << "Kurang" << endl;
}
