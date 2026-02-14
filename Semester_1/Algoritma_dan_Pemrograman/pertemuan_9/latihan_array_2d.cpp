#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int data_jual[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Data ke-" << i + 1 << ". " << j + 1 << endl;
      cout << "Jumlah penjualan: ";
      cin >> data_jual[i][j];
    }
  }

  cout << endl;
  cout << "Data Penjualan Pertahun" << endl;
  cout << "-----------------------" << endl;
  cout << "No.  2001   2002   2003" << endl;
  cout << "-----------------------" << endl;

  for (int i = 0; i < 3; i++) {
    cout << left << setw(3) << i + 1;

    for (int j = 0; j < 3; j++)
      cout << right << setw(6) << data_jual[i][j];

    cout << endl;
  }

  cout << "-----------------------" << endl;

  cout << "\nTekan tombol enter...";
  cin.get();
  cin.ignore();

  return 0;
}
