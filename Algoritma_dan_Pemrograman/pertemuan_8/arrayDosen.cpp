#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int i;
  char nm[5][20];
  int nilai1[5], nilai2[5], hasil[5];

  for (i = 0; i < 2; i++) {
    cout << "Data ke-" << i+1 << endl;

    cout << "Nama Siswa: ";
    cin >> ws;
    cin.getline(nm[i], 20);

    cout << "Nilai Mid Tes: ";
    cin >> nilai1[i];

    cout << "Nilai Final: ";
    cin >> nilai2[i];

    hasil[i] = (nilai1[i] * .4) + (nilai2[i] * .6);
    cout << endl;
  }

  cout << "==============================================" << endl;
  cout << "No. Nama Siswa   Nilai     Nilai     Hasil" << endl;
  cout << "                Mid Tes    Final     Ujian" << endl;
  cout << "==============================================" << endl;

  for (i = 0; i < 2; i++) {
    cout << left << setw(4) << i+1;
    cout << left << setw(15) << nm[i];
    cout << left << setw(10) << nilai1[i];
    cout << left << setw(10) << nilai2[i];
    cout << left << setw(6) << hasil[i] << endl;
  }

  cout << "==============================================" << endl;

  // ===== PAUSE AMAN TANPA sistem("pause") =====
  cout << "\nTekan Enter untuk keluar...";
  cin.ignore();
  cin.get();

  return 0;
}
