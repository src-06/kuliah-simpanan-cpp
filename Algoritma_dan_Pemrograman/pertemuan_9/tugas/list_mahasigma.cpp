#include <iomanip>
#include <iostream>
#include <string>
#include "../../../_lib/additional_system.hpp"

using namespace std;

int main() {
  string mahasigma[3][2] = {
    // Nama Mahasigma | Jurusan
    { "Mahasigma 1",    "Teknik Rekayasa Perangkat Lunak" },
    { "Mahasigma 2",    "Bisnis Digital" },
    { "Mahasigma 3",    "Logistik Bisnis" }
  };

  int nilai[3][5] = {
    // Absen | Tugas | Format | UTS | UAS
    {  1,      2,      3,       4,    5 },
    {  1,      2,      3,       4,    5 },
    {  1,      2,      3,       4,    5 }
  };

  cout << "==================================================================================================\n";
  cout << "                                     DATA NILAI MAHASIGMA\n";
  cout << "==================================================================================================\n";

  cout << left  << setw(5)  << "No";
  cout << left  << setw(15) << "Nama";
  cout << left  << setw(31) << "Jurusan";
  cout << right << setw(9)  << "Absen";
  cout << right << setw(9)  << "Tugas";
  cout << right << setw(9)  << "Format";
  cout << right << setw(9)  << "UTS";
  cout << right << setw(9)  << "UAS\n";

  cout << "--------------------------------------------------------------------------------------------------\n";

  for (int i = 0; i < 3; i++) {
    cout << left << setw(5) << i + 1;

    for (int j = 0; j < 2; j++)
      cout << left << setw(j == 0 ? 15 : 31) << mahasigma[i][j];

    for (int k = 0; k < 5; k++)
      cout << right << setw(9) << nilai[i][k];

    cout << endl;
  }

  cout << "==================================================================================================\n";

  PAUSE();

  return 0;
}
