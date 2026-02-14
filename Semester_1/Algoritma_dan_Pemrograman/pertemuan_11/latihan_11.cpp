#include <iostream>

using namespace std;

struct Kursus {
  char kopaket;
  string nmpaket;
  string komateri;
  string nmmateri;
  long biaya;
} krs;

int main() {
  string tanggal, nodaf, nama, bonus;
  long pot, jumbay, tobia, umuka, sisaang;
  const long udaftar = 100000;

  cout << "                     SISTEM Compoter Center\n";
  cout << "-------------------------------------------------------------------\n";

  cout << "Tanggal Pendaftaran        : ";
  getline(cin, tanggal);
  cout << "No. Pendaftaran            : ";
  getline(cin, nodaf);

  cout << "-------------------------------------------------------------------\n";
  cout << "Nama Pendaftar             : ";
  getline(cin, nama);

  cout << "\nPilihan Paket\n";
  cout << "[1] Reguler\n";
  cout << "[2] Intensif\n";
  cout << "[3] Private\n";
  cout << "Pilih Kode Paket   [1|2|3] : ";
  cin >> krs.kopaket;

  cin.ignore();

  cout << "\nPilihan Materi\n";
  cout << "[VB] Visual Basic\n";
  cout << "[WP] Web Programing\n";
  cout << "Pilih Kode Materi  [VB|WP] : ";
  cin >> krs.komateri;

  if (krs.kopaket == '1') krs.nmpaket = "Reguler";
  else if (krs.kopaket == '2') krs.nmpaket = "Intensif";
  else krs.nmpaket = "Private";

  if (krs.komateri == "VB" || krs.komateri == "vb") {
    krs.nmmateri = "Visual Basic";

    if (krs.kopaket == '1') krs.biaya = 300000;
    else if (krs.kopaket == '2') krs.biaya = 500000;
    else krs.biaya = 800000;
  } else {
    krs.nmmateri = "Web Programing";

    if (krs.kopaket == '1') krs.biaya = 400000;
    else if (krs.kopaket == '2') krs.biaya = 800000;
    else krs.biaya = 1000000;
  }

  tobia = krs.biaya + udaftar;

  if (tobia >= 1000000) {
    pot = tobia * 0.1;
    bonus = "Flash Disk 8GB";
  } else {
    pot = 0;
    bonus = "Flash Disk 2GB";
  }

  jumbay = tobia - pot;

  cout << "\n\n             SE7EN Computer Center\n";
  cout << "-------------------------------------------------------------------\n";
  cout << "Tanggal Pendaftaran  : " << tanggal << endl;
  cout << "No. Pendaftaran      : " << nodaf << endl;
  cout << "Uang Pendaftaran     : Rp." << udaftar << endl;
  cout << "-------------------------------------------------------------------\n";
  cout << "Nama Pendaftar       : " << nama << endl;
  cout << "Paket Yang Dipilih   : " << krs.nmpaket << endl;
  cout << "Materi Yang Dipilih  : " << krs.nmmateri << endl;
  cout << "Biaya Kursus         : Rp." << krs.biaya << endl;
  cout << "Total Biaya          : Rp." << tobia << endl;
  cout << "Potongan Harga       : Rp." << pot << endl;
  cout << "Jumlah Bayar         : Rp." << jumbay << endl;
  cout << "Bonus                : " << bonus << endl;
  cout << "-------------------------------------------------------------------\n";

  cout << "Uang Muka            : Rp.";
  cin >> umuka;

  sisaang = jumbay - umuka;

  cout << "Sisa Angsuran        : Rp." << sisaang << endl;

  cout << "\nProgram selesai. Tekan ENTER untuk keluar...";
  cin.ignore();
  cin.get();

  return 0;
}
