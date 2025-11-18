#include <iostream>

using namespace std;

int main() {
  string nama, kode_pizza, kode_ukuran, nama_pizza, ukuran_pizza, lagi;
  int jml_beli, hrg_pizza, sub_ttl, potongan, ttl_byr, uang_byr, uang_kembali;

  while (true) {
    system("clear");
    cout << "\n---------------------------------------------------------\n";
    cout << "                   TOKO PIZZA LEZAT\n";
    cout << "---------------------------------------------------------\n";
    cout << "Nama Pembeli           : ";
    getline(cin, nama);
    cout << "\nNama Pizza\n[ML] Meat Lovers\n[SS] Super Suprime\n[BP] Beetato Peeperoni\n";
    cout << "Kode Pizza             : ";
    cin >> kode_pizza;
    cout << "\nUkuran [P|S|B]       : ";
    cin >> kode_ukuran;
    cout << "\nJumlah Beli          : ";
    cin >> jml_beli;

    if (kode_pizza == "ML" || kode_pizza == "ml") {
      nama_pizza = "Meat Lovers";

      if (kode_ukuran == "P" || kode_ukuran == "p") {
        ukuran_pizza = "Personal";
        hrg_pizza = 30000;
      } else if (kode_ukuran == "S" || kode_ukuran == "s") {
        ukuran_pizza = "Sedang";
        hrg_pizza = 50000;
      } else if (kode_ukuran == "B" || kode_ukuran == "b") {
        ukuran_pizza = "Besar";
        hrg_pizza = 80000;
      }
    } else if (kode_pizza == "SS" || kode_pizza == "ss") {
      nama_pizza = "Super Suprime";

      if (kode_ukuran == "P" || kode_ukuran == "p") {
        ukuran_pizza = "Personal";
        hrg_pizza = 40000;
      } else if (kode_ukuran == "S" || kode_ukuran == "s") {
        ukuran_pizza = "Sedang";
        hrg_pizza = 60000;
      } else if (kode_ukuran == "B" || kode_ukuran == "b") {
        ukuran_pizza = "Besar";
        hrg_pizza = 90000;
      }
    } else if (kode_pizza == "BP" || kode_pizza == "bp") {
      nama_pizza = "Beetato Peeperoni";

      if (kode_ukuran == "P" || kode_ukuran == "p") {
        ukuran_pizza = "Personal";
        hrg_pizza = 50000;
      } else if (kode_ukuran == "S" || kode_ukuran == "s") {
        ukuran_pizza = "Sedang";
        hrg_pizza = 70000;
      } else if (kode_ukuran == "B" || kode_ukuran == "b") {
        ukuran_pizza = "Besar";
        hrg_pizza = 100000;
      }
    }

    sub_ttl = hrg_pizza * jml_beli;

    if (jml_beli > 5)
      potongan = sub_ttl * 0.1;
    else potongan = sub_ttl * 0.05;

    ttl_byr = sub_ttl - potongan;

    system("clear");

    cout << "\n---------------------------------------------------------\n";
    cout << "                 DETAIL PEMBELIAN PIZZA\n";
    cout << "---------------------------------------------------------\n";
    cout << "Nama Pembeli     : " << nama << endl;
    cout << "Nama Pizza       : " << nama_pizza << endl;
    cout << "Ukuran Pizza     : " << ukuran_pizza << endl;
    cout << "Harga Pizza      : Rp. " << hrg_pizza << endl;
    cout << "Jumlah Beli      : " << jml_beli << endl;
    cout << "---------------------------------------------------------\n";
    cout << "Sub Total        : Rp. " << sub_ttl << endl;
    cout << "Potongan         : Rp. " << potongan << endl;
    cout << "Total Bayar      : Rp. " << ttl_byr << endl;
    cout << "---------------------------------------------------------\n";
    cout << "Uang Bayar       : Rp. ";
    cin >> uang_byr;
    uang_kembali = uang_byr - ttl_byr;
    cout << "Uang Kembali     : Rp. " << uang_kembali << endl;
    cout << "---------------------------------------------------------\n\n";
    cout << "Input Data Lagi [Y|T]: ";
    cin >> lagi;
    cin.ignore();

    if (lagi == "T" || lagi == "t") break;
    system("clear");
  }
}
