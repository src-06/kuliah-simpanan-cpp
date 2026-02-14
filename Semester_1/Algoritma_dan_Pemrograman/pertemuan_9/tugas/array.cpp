#include <iostream>
#include <iomanip>
#include "../../../_lib/additional_system.hpp"

using namespace std;

int main() {
  string nama[10] = {
    "Hafidh",
    "Rizkha",
    "Ambarwati",
    "Hasring",
    "Sarasayu",
    "Hanif",
    "Fikha",
    "Ambaratna",
    "Hening",
    "Saras"
  };

  string jurusan[10] = {
    "Teknik Informatika",
    "Sistem Informasi",
    "Teknik Komputer",
    "Komputer Akuntansi",
    "Sistem Informasi",
    "Teknik Informatika",
    "Teknik Komputer",
    "Komputer Akuntansi",
    "Teknik Komputer",
    "Sistem Informasi"
  };

  int nilai[10][5] = {
    {80,70,90,80,70},
    {60,70,80,75,80},
    {70,70,75,85,84},
    {75,80,80,73,90},
    {60,70,80,75,85},
    {80,70,90,85,80},
    {80,55,75,80,70},
    {70,80,90,75,85},
    {55,80,85,75,80},
    {80,75,85,75,80}
  };

  cout << "==========================================================================\n";
  cout << "                          DATA NILAI MAHASISWA                             \n";
  cout << "==========================================================================\n";

  cout << left << setw(5)  << "No"
      << left  << setw(15) << "Nama"
      << left  << setw(22) << "Jurusan"
      << right << setw(7)  << "Absen"
      <<          setw(7)  << "Tugas"
      <<          setw(9)  << "Format"
      <<          setw(6)  << "UTS"
      <<          setw(6)  << "UAS"
      << endl;

  cout << "--------------------------------------------------------------------------\n";

  for (int i = 0; i < 10; i++) {
    cout << left << setw(5) << i + 1
        << left << setw(15) << nama[i]
        << left << setw(22) << jurusan[i];

    for (int k = 0; k < 5; k++)
      cout << right << setw(7) << nilai[i][k];

    cout << endl;
  }

  cout << "==========================================================================\n";

  PAUSE();

  return 0;
}
