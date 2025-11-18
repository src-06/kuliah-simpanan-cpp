#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string nama, kode, merk;
  char ukuran, lagi;
  int jumbel, harga, totbay, ubay, ukem;

atas:
  // Input
  cout << "\033[0;33m\n           BLOSSOM DISTRO\n";
  cout << "\033[0;33m--------------------------------------\n";
  cout << "\033[0;96mNama Pembeli: ";
  getline(cin, nama);

ulangkode:
  cout << "\033[0;96mKode T-Shirt [PS|SS]: ";
  cin >> kode;

ulangukuran:
  cout << "\033[0;96mUkuran T-Shirt [S|M|L]: ";
  cin >> ukuran;

  // Percabangan
  if (kode == "ps" || kode == "PS") {
    merk = "Polo Shirt";
    if (ukuran == 's' || ukuran == 'S') harga = 50000;
    else if (ukuran == 'm' || ukuran == 'M') harga = 60000;
    else if (ukuran == 'l' || ukuran == 'L') harga = 80000;
    else {
      cout << "\033[0;31mUkuran salah...!!!\n";
      goto ulangukuran;
    }
  } else if (kode == "ss" || kode == "SS") {
    merk = "Skater Shirt";
    if (ukuran == 's' || ukuran == 'S') harga = 40000;
    else if (ukuran == 'm' || ukuran == 'M') harga = 50000;
    else if (ukuran == 'l' || ukuran == 'L') harga = 60000;
    else {
      cout << "\033[0;31mUkuran salah...!!!\n";
      goto ulangukuran;
    }
  } else {
    cout << "\033[0;31mKode T-Shirt Salah...!!!\n";
    goto ulangkode;
  }

  cout << "Jumlah Beli: ";
  cin >> jumbel;
  totbay = harga * jumbel;

  system("cls");

  // Output
  cout << "\033[0;33m\n           BLOSSOM DISTRO\n";
  cout << "\033[0;33m--------------------------------------\n";
  cout << "\033[0;36mNama Pembeli      : " << nama << endl;
  cout << "\033[0;36mKode Merk T-Shirt : " << kode << endl;
  cout << "\033[0;36mMerk T-Shirt      : " << merk << endl;
  cout << "\033[0;36mUkuran T-Shirt    : " << ukuran << endl;
  cout << "\033[0;33m--------------------------------------\n";
  cout << "\033[0;36mHarga             : Rp. " << totbay << endl;
  cout << "\033[0;36mJumlah Beli       : " << jumbel << endl;
  cout << "\033[0;36mTotal Bayar       : Rp. " << totbay << endl;
  cout << "\033[0;33m--------------------------------------\n";
  cout << "\033[0;36mUang Bayar        : Rp. ";
  cin >> ubay;
  ukem = ubay - totbay;
  cout << "\033[0;36mUang Kembali      : Rp. " << ukem << endl;
  cout << "\033[0;33m--------------------------------------\n\n";

  cout << "\033[0mInput data lagi [Y|T] ...? ";
  cin >> lagi;
  cin.ignore(); // Untuk membersihkan newline character di buffer

  if (lagi == 'y' || lagi == 'Y') {
    cout << "\n\n";
    system("cls");
    goto atas;
  }

  return 0;
}