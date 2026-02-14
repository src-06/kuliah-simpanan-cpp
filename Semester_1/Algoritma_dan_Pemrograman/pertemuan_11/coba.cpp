#include <iostream>
#include <string>

using namespace std;

void garis() {
  cout << "----------------------------------------" << endl;
}

string inputDataMahasiswa(string mahasiswa[][5], int index) {
  for (int i = 0; i < index; i++) {
    cout << "\nMahasiswa ke-" << i + 1 << endl;

    cout << "Nama       : ";
    cin.ignore();
    getline(cin, mahasiswa[i][0]);

    cout << "NIM        : ";
    getline(cin, mahasiswa[i][1]);

    cout << "Prodi      : ";
    getline(cin, mahasiswa[i][2]);

    cout << "Nilai UTS  : ";
    getline(cin, mahasiswa[i][3]);

    cout << "Nilai UAS  : ";
    getline(cin, mahasiswa[i][4]);
  }

  return mahasiswa[index][5];
}

int main() {

  cout << "=== Program Input dan Output Data Mahasiswa ===\n\n";

  int MHS; cout << "Jumlah mahasiswa yang akan diinput: "; cin >> MHS;

  cout << "\n\n=== Input Data Mahasiswa ===\n";
  string mahasiswa[MHS][5] = inputDataMahasiswa(mahasiswa, MHS);

  cout << "\n\n=== Output Data Mahasiswa ===\n";

  for (int i = 0; i < MHS; i++) {
    int uts = stoi(mahasiswa[i][3]);
    int uas = stoi(mahasiswa[i][4]);
    int rata = (uts + uas) / 2;

    cout << "Mahasiswa ke-" << i + 1 << endl;
    cout << "Nama     : " << mahasiswa[i][0] << endl;
    cout << "NIM      : " << mahasiswa[i][1] << endl;
    cout << "Prodi    : " << mahasiswa[i][2] << endl;
    cout << "UTS      : " << uts << endl;
    cout << "UAS      : " << uas << endl;
    cout << "Rata-rata: " << rata << endl;
    if (i < MHS) garis();
  }

  return 0;
}
