#include <iostream>

using namespace std;

// Function untuk menampilkan isi array
void tampilkanArray(int arr[], int n) {
  cout << "Isi array: ";
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Function untuk menghitung total elemen array
int hitungTotal(int arr[], int n) {
  int total = 0;

  for(int i = 0; i < n; i++)
    total += arr[i];

  return total;
}

// Function untuk mencari nilai terbesar
int cariMaks(int arr[], int n) {
  int maks = arr[0];

  for(int i = 1; i < n; i++)
    if(arr[i] > maks)
      maks = arr[i];

  return maks;
}

int main() {
  int n;

  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  int arr[n];

  // Input elemen array
  cout << "Masukkan " << n << " angka: ";
  for(int i = 0; i < n; i++)
    cin >> arr[i];

  // Pemanggilan function
  tampilkanArray(arr, n);
  cout << "Total nilai: " << hitungTotal(arr, n) << endl;
  cout << "Nilai terbesar: " << cariMaks(arr, n) << endl;

  return 0;
}
