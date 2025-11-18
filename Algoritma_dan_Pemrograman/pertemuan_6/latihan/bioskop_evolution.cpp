#include <iostream>

using namespace std;

int main() {
  int teater, kode_film, kode_jam, jml_beli, hrg_tiket, jml_byr, uang_byr, uang_kmbl, ttl_byr;
  string nama, jdl_film, jam_tyng;
  char input_lagi;

  do {
    cout << "===============================================================\n";
    cout << "                    BIOSKOP Evolution\n";
    cout << "===============================================================\n";
    cout << "1. Prince Of Persia.\n";
    cout << "1. How To Train Your Dragon.\n";
    cout << "1. The Last Air Bender.\n";
    cout << "1. The Twilight: Eclipse.\n";
    cout << "===============================================================\n";
    cout << "Nama Pembeli              : ";
    getline(cin, nama);

    to_kode_film:
    cout << "Pilih Kode Film [1/2/3/4] : ";
    cin >> kode_film;

    switch (kode_film) {
      case 1:
        jdl_film = "Prince Of Persia";
        teater = 1;
      break;
      case 2:
        jdl_film = "How To Train Your Dragon";
        teater = 2;
      break;
      case 3:
        jdl_film = "The Last Air Bender";
        teater = 3;
      break;
      case 4:
        jdl_film = "The Twilight: Eclipse";
        teater = 4;
      break;

      default:
        cout << "Judul film tidak ditemukan...\n";
        system("pause");
        system("cls");
        cout << "===============================================================\n";
        cout << "                    BIOSKOP Evolution\n";
        cout << "===============================================================\n";
        cout << "1. Prince Of Persia.\n";
        cout << "1. How To Train Your Dragon.\n";
        cout << "1. The Last Air Bender.\n";
        cout << "1. The Twilight: Eclipse.\n";
        cout << "===============================================================\n";
        cout << "Nama Pembeli              : " << nama;
        goto to_kode_film;
      break;
    }

    to_jam_tyng:
    cout << "Jam Tayang Film" << endl;
    cout << "1. 12.30" << endl;
    cout << "2. 15.30" << endl;
    cout << "3. 18.30" << endl;
    cout << "Pilih Jam Tayang [1/2/3]  : ";
    cin >> kode_jam;

    switch (kode_jam) {
      case 1:
        jam_tyng = "12.30";
      break;
      case 2:
        jam_tyng = "15.30";
      break;
      case 3:
        jam_tyng = "18.30";
      break;

      default:
        cout << "Jam tayang tidak ditemukan...\n";
        system("pause");
        system("cls");
        cout << "===============================================================\n";
        cout << "                    BIOSKOP Evolution\n";
        cout << "===============================================================\n";
        cout << "1. Prince Of Persia.\n";
        cout << "1. How To Train Your Dragon.\n";
        cout << "1. The Last Air Bender.\n";
        cout << "1. The Twilight: Eclipse.\n";
        cout << "===============================================================\n";
        cout << "Nama Pembeli              : " << nama << endl;
        cout << "Pilih Kode Film [1/2/3/4] : " << kode_film << endl;
        goto to_jam_tyng;
      break;
    }

    cout << "Jumah Beli                : ";
    cin >> jml_beli;

    hrg_tiket = 20000;
    ttl_byr = hrg_tiket * jml_beli;

    system("cls");

    cout << "===============================================================\n";
    cout << "                    BIOSKOP Evolution\n";
    cout << "===============================================================\n";
    cout << "Nama Pembeli              : " << nama << endl;
    cout << "Judul Film                : " << jdl_film << endl;
    cout << "Teater                    : " << teater << endl;
    cout << "Jam Tayang                : " << jam_tyng << endl;
    cout << "Harga Tiket               : Rp. " << hrg_tiket << endl;
    cout << "Jumlah Beli Tiket         : " << jml_beli << endl;
    cout << "===============================================================\n";
    cout << "Jumlah Bayar              : Rp. " << ttl_byr << endl;
    cout << "===============================================================\n";
    cout << "Uang Bayar                : Rp. ";
    cin >> uang_byr;
    uang_kmbl = uang_byr - ttl_byr;
    cout << "Uang Kembali              : Rp. " << uang_kmbl << endl;
    cout << "===============================================================\n";
    cout << "           Your Satisfaction Is Our Priority...\n\n";
    cout << "Ingin Input Data Lagi [Y/T]: ";
    cin >> input_lagi;
    cin.ignore();
  } while (toupper(input_lagi) != 'T');

  return 0;
}
